#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int i, ans = 0;
    sort(arr, arr+n, ::greater<int>());
    for(i=0;i<n;i++){
        ans+=arr[i];
        if(ans>(sum-ans))
            break;
    }
    cout<<i+1<<endl;
    return 0;
}