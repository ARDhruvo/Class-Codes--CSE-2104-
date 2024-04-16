#include <bits/stdc++.h>
using namespace std;

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

int main(){
    vector<int> A;
    int x;
    for(int i = 0; i < 10; i++){
        cin>> x;
        A.push_back(x);
    }
    minFind(A);
}
