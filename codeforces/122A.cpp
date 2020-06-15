#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isLucky(int n){
    while(n>0){
        if(n%10!=4 && n%10!=7)
            return false;
        n/=10;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    bool flag = false;
    for(int i=4;i<=n;i++){
        if(n%i==0){
            if(isLucky(i))
            {
                flag = true;
                break;
            }
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}