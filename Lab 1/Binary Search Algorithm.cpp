#include <bits/stdc++.h>
using namespace std; //will be taught in 14th lab

int len;

int Bin_Search(int A[], int k){
    int lo = 0, hi = len - 1;
    while(lo <= hi){
        int mid = (lo + hi) / 2;
        if (A[mid] == k){
            return 1;
        }
        else if (A[mid] >= k){
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }
    return 0;
}

int main(){
    int A[9] = {11, 22, 33, 44, 55, 66, 77, 88 , 99};
    len = sizeof(A);
    int ans = Bin_Search(A, 56);
    if(ans){
        printf("Found");
    }
    else{
        printf("Not found");
    }
}
