#include <iostream>
using namespace std;

int main()
{
    int stu, sub; //declaring variables for number of students and subjects
    int highestTotal = 0, highestStudent = 1;
    cout << "How many students are there? " ;
    cin >> stu;
    cout << endl;
    cout << "How many subjects are there? ";
    cin >> sub;

    int** rec = new int*[stu]; //double pointer for storing pointer to the array of students
    //allocating subjects array for each student
    for (int i = 0; i < stu; i++) {
        rec[i] = new int[sub];
    }
// Loop for reading marks for each student
    for(int i = 0; i < stu; i++){
        cout << "Enter marks for student " << i + 1 << " ";
        for(int j = 0; j < sub; j++){
            cin >> *(*(rec + i) + j);
        }
    cout << endl;
    }
    // Loop for calculating each student's total and finding the highest total
    for(int i = 0; i < stu; i++){
        int total = 0;
        for(int j = 0; j < sub; j++){
            total += *(*(rec + i) + j);
        }
        cout << "Total marks of student " << i + 1 << ": " << total << endl;
        if(total > highestTotal){
            highestTotal = total;
            highestStudent = i + 1;
        }
    }
    cout << "Student " << highestStudent << " has the highest total: "<< highestTotal << endl;
    // Delete all rows
    for(int i = 0; i < stu; i++){
        delete[] rec[i];
    }
    delete[] rec;
    rec = nullptr;
    return 0;
}
