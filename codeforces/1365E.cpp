#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
int setb(ll n){
    int count = 0;
    while(n){
        n = n>>1;
        count++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    if(n==1)
        cout<<arr[0]<<endl;
    else{
        ll mi = 0;
        for(int i=0;i<n;i++){
            ll d = 1<<(setb(arr[i]));
            if(mi<d-1)
                mi = d-1;
            for(int j=i+1;j<n;j++){
                ll d = arr[i]|arr[j];
                if(mi<d)
                    mi = d;
            }
        }
        cout<<mi<<endl;
    }
    
    return 0;
}