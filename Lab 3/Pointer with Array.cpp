#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10, 12, 13, 14, 15};
    int *p = arr; //same as *p = &arr[0]
    //print out the addresses and stuffs
    cout << arr[0] << endl; //prints index 0
    cout << &arr[0] << endl; //prints start of address of array
    cout << *(&arr[0]) << endl; //prints value stored in the address of array's first index
    cout << *(&arr[0]) + 1 << endl; //prints value of (index 0 + 1)
    cout << *(&arr[0] + 1) << endl; //prints value of index (0 + 1)
}
