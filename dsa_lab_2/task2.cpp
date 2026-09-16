#include <iostream>
using namespace std;

int main()
{
    int total = 0; //innitializing totoal to 0
    int count =0;  //initializing count to 0
    int n;  //declaring variable n fo rnumber of students
    cout << "How many students are there? " <<endl;
    cin >>n;
    float *marks = new float[n]; //allocating array in heap for the number of students
    //reading the marks of students in the array
    for(int i = 0 ; i < n; i++){
    cout << "What are the marks of  Student " << i+1 << " : " <<endl;
    cin >> *(marks+i);
    }
    //loop for printign the mark sof students
    cout << "The marks of the students are: ";
    for(int i = 0 ; i < n ; i++){
        cout << *(marks+i) << " ";
    }
    cout << endl;
    //loop for counting total marks
    for(int i = 0 ; i < n ; i++){
        total += *(marks+i);
    }
    cout << "Total marks of students are: " << total << endl;
    cout << "The average marks of students are: " << (float)total/n <<endl; //printing average
    //loop fo rrecording numbe rof students with marks greater than 50
    for(int i = 0 ; i < n ;i++){
        if(*(marks+i) >= 50){
            count++;
        }
    }
    cout << count << " students have marks greater than 50" << endl;

    delete[] marks;
    marks = nullptr;

    return 0;
}
