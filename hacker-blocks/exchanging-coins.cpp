#include<bits/stdc++.h>
using namespace std;

map<int, long long> dp;

long long f(int n){
   if(n == 0){
       return 0;
   }

   if(dp[n] != 0){
       return dp[n];
   }
   
   else{
       long long aux = f(n/2)+f(n/3)+f(n/4);
       if(aux > n){
           dp[n] = aux;
       }

       else{
           dp[n] = n;
       }
   }

   return dp[n];
}

int main(){

    long long n;
    cin>>n;
    
    cout<<f(n)<<'\n';
    
    return 0;
}