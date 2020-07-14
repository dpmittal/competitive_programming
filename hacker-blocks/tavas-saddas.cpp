#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    char *a = new char[10];
    cin.getline(a, 10);

    int n = strlen(a);

    ll ans = (1<<n) - 2;

    for(int i = n - 1, pos =0; i>=0; i--, pos++){
        if(a[i] == '7'){
            ans += (1<<pos);
        }
    }

    cout<<ans+1<<'\n';
    return 0;
}