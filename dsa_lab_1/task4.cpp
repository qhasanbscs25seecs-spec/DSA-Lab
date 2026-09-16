#include <iostream>
using namespace std;

int main(){
    int array[8]; // defining an array
    cout << "Write the numbers of the array: " << endl; // loop for reading numbers in array
    for (int i = 0; i <= 7; i++){
        cin >> array[i];
    }
    int largest = array[0];
    int smallest = array[0];

    for (int i = 0; i <= 7; i++){
        if (array[i] > largest){ // condition for rfinding the largest number
            largest = array[i];
        }
        if (array[i] < smallest){ // condition for rfinding the smallest number
            smallest = array[i];
        }
        for (int j = 0; j < i; j++){ // loop for catching duplicate numbers
            if (array[j] == array[i]){
                cout << "Duplicate number " << array[i] << " detected, first time in place " << j+1 << endl;
                break;
            }
        }
    }
    //printing the largets and smallest numbers
    cout << "The largest number is " << largest << endl;
    cout << "The smalles tnumber is " << smallest << endl;
    return 0;
}
