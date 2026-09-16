#include <iostream>
using namespace std;

int main(){
    int array[6]; // defining an array
    int temp;
    cout << "Write the numbers of the array: " << endl; // loop for reading numbers in array
    for (int i = 0; i <= 5; i++){
        cin >> array[i];
    }
    for (int i = 0; i < 3; i++){ //swapping the elemts
        temp = array[i]  ;
        array[i] = array[5 - i];
        array[5-i] = temp;
    }
    for (int i = 0; i <= 5; i++){ // printing the updated array
        cout << array[i] << " "  ;
    }
    return 0;
}
