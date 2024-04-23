#include <bits/stdc++.h>
using namespace std;

void passByValue(int x, int y){ //receives the sent variable's VALUE
    cout << "Inside Function" << endl;
    x = 27;
    y = 97;
    cout << "x = " << x << " y = " << y << endl; //prints the VALUE; DOES NOT change the value in main()
}

void passByAddress(int *x, int *y){ //receives the variable's ADDRESS
    cout << "Inside Function" << endl;
    *x = 28;
    *y = 98;
    cout << "x = " << *x << " y = " << *y << endl; //prints the VALUE; CHANGES the value in main()
}

void passByReference(int &x, int &y){ //receives the ADDRESS
    cout << "Inside Function" << endl;
    x = 29;
    y = 99;
    cout << "x = " << x << " y = " << y << endl; //prints the VALUE; CHANGES the value in main()
}

int main(){
    int x = 2, y = 3;
    cout << "x = " << x << " y = " << y << endl;
    passByValue(x, y); //sends the VARIABLEs; values are unchanged
    cout << "After passing argument (by value): " << endl;
    cout << "x = " << x << " y = " << y << endl;
    passByAddress(&x, &y); //sends the ADDRESS; values are changes
    cout << "After passing argument (by address): " << endl;
    cout << "x = " << x << " y = " << y << endl;
    passByReference(x, y); // sends the VARIABLEs; values are changes
    cout << "After passing argument (by reference): " << endl;
    cout << "x = " << x << " y = " << y << endl;
}
