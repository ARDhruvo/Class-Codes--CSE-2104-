#include <bits/stdc++.h>
using namespace std; //will be taught in 14th lab


int Bin_Search(vector<int> A, int k){
    int lo = 0, hi = A.size() - 1;
    while(lo <= hi){
        int mid = (lo + hi) / 2;
        if (A[mid] == k){
            //Find the lower and upper bound
            //hi = mid - 1; //Use this somehow
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
    vector<int> A; //= {11, 22, 33, 44, 55, 66, 77, 88 , 99};
    int x;
    for(int i = 0; i < 10; i++){
        cin>> x;
        A.push_back(x);
    }
    int k;
    cin >> k;
    int ans = Bin_Search(A, k);
    if(ans){
        printf("Found");
    }
    else{
        printf("Not found");
    }
}
