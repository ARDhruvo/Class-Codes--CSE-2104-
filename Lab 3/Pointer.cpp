#include <bits/stdc++.h>
using namespace std;

int main(){
    int x; //takes space in memory
    cout << x << endl;
    cout << &x << endl; //since it is not mentioned, the computer does this first
    cout << *(&x) << endl; //then it checks the value using the address
    //& = address, * = pointer
    //only when you declare it: int *p = &x;
    //that way p -> &x
    int y;
    cout << y << endl;
    cout << &y << endl;
    cout << *(&y) << endl;
    int z;
    cout << z << endl;
    cout << &z << endl;
    cout << *(&z) << endl;
    /*
     * use delete[]p or free(p) to remove the pointers and values
     * for DAM, use p = new int[n] to get it not cluttered
     * use v.clear() to clear vectors
     */
    /*int a;
    cout << a << endl;
    cout << &a << endl;
    cout << *(&a) << endl;*/
}
