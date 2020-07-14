#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int n;
    cin>>n;

    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //Algo
    sort(a, a+n);
    ll res = 0;
    for(int i=0;i<n;i++){
        res += abs(a[i] - (i+1));
    }

    cout<<res<<'\n';
    
    return 0;
}