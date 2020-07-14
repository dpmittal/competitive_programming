#include<bits/stdc++.h>
using namespace std;

int main(){

    int ans=0;
    for(int i=1;i<=5;i++){
        ans = ans^i; 
    }
    cout<<ans<<endl;
    return 0;
}