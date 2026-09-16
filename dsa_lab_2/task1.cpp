#include <iostream>
using namespace std;

int main()
{
    int sales[5]; //declaring an array
    int *p = sales; //initializing a pointer ot the array
    int total = 0;
    //loop for reading elemets in the array
    cout << "Type 5 integers in the array: " << endl;
    for(int i = 0 ; i < 5 ; i++){
        cin >> *(p+i) ;
    }
    *(p+2) += 2; //add 2 to the third value of the array
    //printing the array
    cout << "The array after the updatatation of third elemnt is : ";
    for(int i = 0 ; i < 5 ; i++){
        cout << *(p+i) << " ";
    }
    cout << endl;
    //adding total
    for(int i = 0 ; i < 5 ; i++){
        total += *(p+i) ;
    }
    cout << "The total after the yupdataion of third elemnt is: " << total;

    return 0;
}