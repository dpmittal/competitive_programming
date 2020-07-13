#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int arr[1000001] = {};
    arr[2] = 1;
    for(ll i=3;i<=1000000;i+=2){
      arr[i] = 1;
    }
    for(ll i=2;i<=1000000;i++){
        if(arr[i]){
            for(ll j=i*i;j<=1000000;j+=2*i){
                arr[j] = 0;
            }
        }
    }
    ll n;
    cin>>n;
    ll i=2;
    while(n>0){
        if(arr[i]==1)
            n--;
        if(n==0)
            break;
        i++;
    }
    cout<<i<<endl;
	return 0;
}
