#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool myCompare(pair<int, bool> a, pair<int, bool> b){
    return a.first<b.first;
}

ll magic(int *choc, pair<int, bool> can[], int n, int m){
    sort(can, can + m, myCompare);

    int dp[n][m+1];
    for(int i=0;i<n;i++){
        dp[i][0]=INT_MAX;
    }

    

}

int main(){

    int n,m;
    cin>>n>>m;

    int *choc = new int[n];
    pair<int, bool> can[m];

    for(int i=0;i<n;i++){   
        cin>>choc[i];
    }

    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        can[i]=make_pair(x, false);
    }

    cout<<magic(choc, can, n, m)<<'\n';
    return 0;
}