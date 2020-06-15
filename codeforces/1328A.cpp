#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int a, b;
        cin>>a>>b;
        if(a%b!=0)
            cout<<b-(a%b)<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}