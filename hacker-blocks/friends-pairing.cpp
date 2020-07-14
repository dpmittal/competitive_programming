#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll pairWays(int n){    
    if(n == 1 || n == 0){
        return 1;
    }

    return pairWays(n - 1) + ((n - 1) * pairWays(n - 2));
}

int main(){

    short int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<pairWays(n)<<'\n';
    }
    return 0;
}