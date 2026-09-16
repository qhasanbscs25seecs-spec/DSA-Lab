#include <iostream>
using namespace std;

//main function
int main(){
    //initializing array
    int numbers[5];
    int total = 0; //initializing the total to 0

    cout << "Write the numbers u want to add in the array" << endl;
    //loop for reading t he numbers in an array
    for (int i = 0; i < 5; i++){
        cin >> numbers[i];
    }
    //loop for adding the numbers of array in total
    for (int i = 0; i < 5; i++){
        total += numbers[i];
    }

    //displaying the total
    cout << "The total is: " << total << endl;
    return 0;
}
