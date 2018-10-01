#include<bits/stdc++.h>
using namespace std;

int fast_power(int n, int p){
    if(p == 0){
        return 1; 
    }

    int common = fast_power(n, p/2);
    common *= common;

    if(p&1){
        return n * common;
    }
    return common;
}

int main(){

    int n, p;
    cin>>n>>p;
    cout<<fast_power(n, p);
    return 0;
}