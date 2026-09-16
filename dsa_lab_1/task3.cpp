#include <iostream>
using namespace std;
//defing class student
class Student{
public:
    //initializing variables for class
    int marks;
    int rollNumber;
    //displaying the roll number and marks of the student
    void display(){
        cout << "The roll number is : " << rollNumber << endl;
        cout << "The marks are : " << marks << endl;
    }
};

int main(){
    Student s1, s2; //defingin objects
    s1.marks = 75;
    s1.rollNumber = 1;
    cout << "Student 1 information: " << endl;
    s1.display(); //displaying info of student 1
    s2.marks = 90;
    s2.rollNumber = 2;
    cout << "Student 2 information: " << endl;
    s2.display();// displaying info of student 2
    return 0;
}
