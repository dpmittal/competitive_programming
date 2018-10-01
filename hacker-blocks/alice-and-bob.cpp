#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll aliceAndBob(map<int, int> freq, int maxi){
    ll *dp = new ll[maxi+2];
    memset(dp, 0, sizeof(dp));

    dp[0]=0;
    dp[1]=freq[1];

    for(int i=2;i<=maxi;i++){
        dp[i] = max(i*freq[i] + dp[i-2], dp[i-1]);
    }

    return dp[maxi];
}

int main(){

    int n;
    cin>>n;
    map<int, int> freq;
    freq.clear();
    int *a = new int[n];
    int maxi=INT_MIN;

    for(int i=0;i<n;i++){
        cin>>a[i];
        freq[a[i]]++;
        maxi = max(maxi, a[i]);
    }

    cout<<aliceAndBob(freq, maxi)<<'\n';    
    return 0;
}