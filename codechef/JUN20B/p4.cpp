#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int factorsof2(ull n){
    int count = 1;
    while(n){
        n/=2;
        if(n%2!=0)
            break;
        count++;
    }
    return count;
}

ull powerof2(int n){
    if(n==0)
        return 1;
    ull ans = powerof2(n/2);
    ans=ans*ans;
    if(n%2!=0)
        return ans*2;
    else
        return ans;
}
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        ull n;
        cin>>n;
        if(n%2!=0)
            cout<<(n-1)/2<<endl;
        else{
            int c = factorsof2(n);
            ull i = powerof2(c+1);
            ull ans = n/i;
            cout<<ans<<endl;
        }
    }
    return 0;
}