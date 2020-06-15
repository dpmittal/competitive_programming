#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        int ans = INT_MAX;
        for(int i=1;i<n;i++){
            if(ans>(arr[i]-arr[i-1]))
                ans = arr[i]-arr[i-1];
        }
        cout<<ans<<endl;
    }
    return 0;
}