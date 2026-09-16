#include <iostream>
using namespace std;
 int main(){
    cout << "How many Students are there? "; 
    int n;
    cin >> n;
    int *old = new int[n]; //allocating an array for marks
    cout << "Enter marks of students: ";
    for(int i=0; i<n; i++){
        cin >> *(old+i);
    }
    int *newRec = new int[n+1]; //making a new array for an extra slot for new student
    //copying contents of the old array to new one
    for(int i=0;i<n;i++){
        *(newRec+i) = *(old+i);
    }
    cout << "Enter marks of new student: ";
    cin >> *(newRec+n); //adding the marks of new student in the array
    delete [] old; //deleting the old array
    old = newRec; //pointing the old pointer to new array
    n =n+1; //updating the value of n
    for(int i=0;i<n;i++){ //printing the marks of all students
        cout << *(old+i) << " ";
    }
    delete[] newRec;  //deleting the new array
    return 0;
 }