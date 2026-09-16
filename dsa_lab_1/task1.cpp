#include <iostream>
using namespace std;

//main function
int main(){
    //initializing array
    int array[] = { 2, 4, 6, 8, 10 };
    array[2] = 7; //replacing the 3rd value in array by 7
    //loop for printing out the array elements with spaces
    for (int i = 0; i < 5; i++){
        cout << array[i] << " ";
    }

    return 0;
}
