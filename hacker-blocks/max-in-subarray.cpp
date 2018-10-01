#include<bits/stdc++.h>
using namespace std;


int maxInSubarray(int *a, int s, int e){
    if(s == e){
        return a[s];
    }

    else{
        int m = (s + e) / 2;
        return max(maxInSubarray(a, s, m), maxInSubarray(a, m + 1, e));
    }
}

int main(){

    int n, k;
    cin>>n>>k;

    int *a = new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    // //D&C max finding O(nlogn)
    int s, e;
    for(int i = 0; i < n - k + 1; i++){
        s = i;
        e = i + k - 1;
        cout<<maxInSubarray(a, s, e)<<" ";
    }
    return 0;
}