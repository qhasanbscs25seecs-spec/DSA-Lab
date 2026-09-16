#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int* values = new int[n]; //initializing an array
    cout << "Type in the values of the array: " ;
    for (int i = 0; i < n; i++) {   // Loop fo reading values into the array
        cin >> values[i];
    }

    for (int i = 0; i < n; i++) {   // printing the values of the array
        cout << values[i] << " ";
    }
    cout << endl;

    delete[] values;   
    values = nullptr;  
    return 0;
}