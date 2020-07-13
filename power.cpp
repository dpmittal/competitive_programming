#include<iostream>
#define ll long long
using namespace std;
ll power(ll a, ll b, ll m){
    if(b==0)
        return 1;
    if(b%2==0)
        return ((power(a, b/2, m)%m)*(power(a, b/2, m)%m))%m;
    return ((a%m)*((power(a, b/2, m)%m)*(power(a, b/2, m)%m))%m)%m;
}
int main() {
    ll a, b, c;
    cin>>a>>b>>c;
    cout<<power(a, b, c)<<endl;
	return 0;
}
