#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int res, a;
    cin>>a;
    res = a;

    for(int i = 1; i < n; i++){
        cin>>a;
        res = res ^ a;
    }

    cout<<res<<'\n';
    return 0;
}