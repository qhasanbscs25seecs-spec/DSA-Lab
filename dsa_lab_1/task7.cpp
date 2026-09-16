#include <iostream>
using namespace std;

int main(){
    int array[10]; // defining an array

    //loop for addinf numbers
    cout << "Write the numbers of the array: " << endl;
    for (int i = 0; i < 10; i++){
        cin >> array[i];
    }

    int count = 0; // stores the number of unique values

    // checking every element of the array
    for (int i = 0; i < 10; i++){
        bool isDuplicate = false;
        // checking if the current value exists
        for (int j = 0; j < count; j++){
            if (array[j] == array[i]){
                isDuplicate = true;
                break;
            }
        }
        // if the value is not a duplicate
        if (!isDuplicate){
            int temp = array[i];
            // shifting elements
            for (int j = i; j > count; j--){
                array[j] = array[j - 1];
            }
            // putting the unique value at the beginning
            array[count] = temp;
            count++;
        }
    }
    // displaying the unique values
    cout << "Unique values: ";
    for (int i = 0; i < count; i++){
        cout << array[i] << " ";
    }
    // displaying the total number of unique values
    cout << endl;
    cout << "Count: " << count << endl;

    return 0;
}
