#include<bits/stdc++.h>
using namespace std;

int main(){

    short int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int *a = new int[n];
        int *left = new int[n];
        int *right = new int[n];
        int l = INT_MIN;
        int r = INT_MIN;

        for(int i = 0; i < n; i++){
            cin>>a[i];
            left[i] = max(l, a[i]);
            l = left[i];
        }

        for(int i = n - 1; i >= 0; i--){
            right[i] = max(a[i], r);
            r = right[i];
        }

        //Calculate levels
        int sum = 0;

        for(int i = 0; i < n; i++){
            sum += min(left[i], right[i]) - a[i];   
        }

        cout<<sum<<'\n';
    }
    return 0;
}