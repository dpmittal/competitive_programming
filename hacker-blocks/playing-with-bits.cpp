#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n){
    int ctr = 0;
    while(n){
        n = (n&(n-1));
        ctr++;
    }

    return ctr;
}

int main(){

    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        int sum = 0;
        for(int i=a;i<=b;i++){
            sum += countSetBits(i);
        }

        cout<<sum<<'\n';
    }
    return 0;
}