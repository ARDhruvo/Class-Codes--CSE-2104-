#include <bits/stdc++.h>
using namespace std;

void TOH(int n, int a, int b, int c)
{
    if(n > 0)
    {
        TOH(n-1, a, c, b);
        cout << a << " to " << c << endl;
        TOH(n-1, b, a, c);
    }
}

int main()
{

    TOH(10000, 1, 2, 3); // Increasing the iteration shows how much capacity it can utilize
}
