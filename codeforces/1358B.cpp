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
        int ans = 1;
        for(int i=0;i<n;i++){
            if(arr[i]<=(i+1))
                ans = i+2;
        }
        cout<<ans<<endl;
    }
    return 0;
}