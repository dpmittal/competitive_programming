#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr, arr+n);
    int ans = 0, curr = 0;
    for(int i=0;i<n;i++){
        if(curr+arr[i]>4){
            ans++;
            curr = arr[i];
        }
        else
            curr+=arr[i];
    }
    cout<<ans+1<<endl;
    return 0;
}