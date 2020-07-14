#include<bits/stdc++.h>
using namespace std;

int main(){

    int l,r;
    cin>>l>>r;
    int max_xor = INT_MIN;
    for(int i = l; i <= r; i++){
        for(int j = l; j <= r; j++){
            if(max_xor <= (i^j)){
                max_xor = (i^j);
            }
        }
    }

    cout<<max_xor;
    return 0;
}