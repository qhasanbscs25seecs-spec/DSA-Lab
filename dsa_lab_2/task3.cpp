#include <iostream>
using namespace std;

int main()
{
    int sales[2][3]; //intitlaizng array
    int(*rowPtr)[3] = sales; //declaring rowPtr pointer to the first elemen of rows
    //loop for reading data in ithe arrays
    for(int i=0; i<2; i++){
        cout << "Type the number of sales in  store " << i+1 <<" on three days ";
        for(int j=0;j<3;j++){
            cin >> *(*(rowPtr+i)+j);
        }
        cout << endl;
    }
    //calculating total for each branch
    for(int i=0; i<2; i++){
        int total = 0;
        for(int j=0;j<3;j++){
            total+= *(*(rowPtr+i)+j);
        }
        cout << "The total for branch " << i+1 << " is " << total;
        cout << endl;
    }
    //calculating total for each day
    for(int j=0; j<3; j++){
        int total = 0;

        for(int i=0;i<2;i++){
            total+= *(j+*(rowPtr+i));
        }
        cout << "The total for day " << j+1 << " is " << total;
        cout << endl;
    }
    return 0;
}
