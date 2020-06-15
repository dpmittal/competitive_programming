#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    char ch = 'X';
    ll s = 1, e = n;
    ll ans = 0;
    while(ch!='E'){
        char res[2];
        ll d = (rand() % (e - s + 1)) + s;
        cout<<d<<endl;
        cin>>res[0];
        if(res[0]=='E')
            break;
        cout<<d<<endl;
        cin>>res[1];
        int i = 0;
        if(res[0]==res[1]){
            if(res[0]=='L')
                e = d-1;
            else
                s = d+1;
        }
    }
    return 0;
}