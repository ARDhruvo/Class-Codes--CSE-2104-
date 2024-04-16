#include <bits/stdc++.h>
using namespace std;

void printVect(vector<int> A, int s){
    for(int i = 0; i < s; i++){
        cout << A[i] << " ";
    }
}

int selectionSort(vector<int> A)
{
    int n = A.size();
    for(int j = 0; j <= n-2; j++)
    {
        int mini = A[j], pos = j;
        for(int i = j+1; i <= n-1; i++)
        {
            if(A[i] < mini)
            {
                mini = A[i];
                pos = i;
            }

        }
        swap(A[pos], A[j]);
    }
    printVect(A, n);

}
/*
void minFind(vector<int> A){
    int n = A.size();
    int mini = A[0], pos = 0;
    for(int i = 0; i <= n-1; i++){
        if(A[i] < mini){
            mini = A[i];
            pos = i;
        }
    }
    cout << mini << " " << pos;
}
*/
int main()
{
    vector<int> A;
    int x;
    for(int i = 0; i < 10; i++)
    {
        cin>> x;
        A.push_back(x);
    }
    //minFind(A);
    selectionSort(A);
}
