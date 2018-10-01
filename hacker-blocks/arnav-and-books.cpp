#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int n,k;
    cin>>n>>k;
    int *a=new int[n];
    ll sum=0;
    //Precompute
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }

    int maxi=INT_MIN;
    
    if(sum<=k){
        maxi=max(maxi, n);
    }

    for(int i=1;i<n;i++){
        if(sum-a[i-1] <= k){
            maxi=max(maxi, n-i);
            sum-=a[i-1];
        }
    }

    cout<<maxi<<'\n';
    return 0;
}