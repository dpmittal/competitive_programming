#include<bits/stdc++.h>
using namespace std;

int countBinary(int n){
   int *dp = new int[n + 1];
   dp[0] = 1;
   dp[1] = 2;
   for(int i = 2; i <= n; i++){
       dp[i] = dp[i - 1] + dp[i - 2];
   }

   return dp[n];
}

int main(){

    short int t;
    cin>>t;
    while(t--){        
        int n;
        cin>>n;
        
        cout<<countBinary(n)<<'\n';
    }
    return 0;
}