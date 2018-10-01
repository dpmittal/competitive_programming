#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    char n1[10000];
    char n2[10000];
    char out[10000];
    while(t--){
        cin>>n1>>n2;
        for(int i = 0; i<strlen(n1); i++){
            out[i] = ((n1[i] -'0')^(n2[i] -'0')) + 48;
        }
        out[strlen(n1)] = '\0';
        cout<<out<<'\n';
    }
    return 0;
}