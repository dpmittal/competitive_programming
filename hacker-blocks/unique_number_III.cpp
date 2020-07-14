#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    bitset<64> b[n];
    int a;
    for(int i = 0; i < n; i++){
        cin>>a;
        b[i] = a;
    }

    //Algo
    bitset<64> res;

    int *sum = new int[64];
    memset(sum, 0, 64);

    for(int i = 0; i < 64; i++){
        for(int j = 0; j < n; j++){
            sum[i] += b[j][i];
        }

        sum[i] %= 3;
        res[i] = sum[i];
    }

    cout<<res.to_ulong()<<'\n';
}
