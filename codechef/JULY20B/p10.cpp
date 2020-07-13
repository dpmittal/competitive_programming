#include<bits/stdc++.h>
#define ll long long
#define mod 998244353
using namespace std;
ll raise(ll a, ll b){ 
    if (b == 0)
        return 1; 
    else if(b%2!=0)
        return (a * raise((a * a) % mod, b/2)%mod); 
    else
        return raise((a * a) % mod, b/2);  
}
ll gcd(ll a,ll b){ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}
int main(){
    ll itr;
    cin>>itr;
    while(itr--){
        string s, temp1, temp2;
        cin>>s;
        ll p=0, n = s.length(), k = (n*(n+1))/2;
        ll wt[26] = {0};
        for(int i=0;i<26;i++)
            cin>>wt[i];       
        unordered_map<string,ll> m;
        for (ll i = 0; i < n; i++)  
            for (ll j = 1; j <= n - i; j++)
                m[s.substr(i, j)]++;
        for(auto i=m.begin(); i!=m.end();i++){
            ll len = i->first.length(), temp = 0;
            for(ll j=1;j<=len;j++){
                ll z = 0;
                temp1 = "";
                temp2 = "-1";
                bool check = true;
                while(z<len){
                    if(z+j<len){
                        temp1 = i->first.substr(z,j);
                        if(temp2!="-1" && temp1!= temp2){
                            check = false;
                            break;
                        }
                        temp2 = temp1;
                    }
                    else{
                        temp1 = i->first.substr(z,len - z);
                        if(temp2=="-1")
                            temp2 = temp1;
                        else
                            check = mismatch(temp2.begin(),temp2.end(),temp1.begin()).second == temp1.end() && temp2.size()>=temp1.size();
                    }
                    z+=j;
                }
                if(temp2!="-1" && check){
                    for(ll i = 0;i<temp2.length();i++)
                        temp+= wt[temp2[i]-'a'];
                }
            }
            p+= temp*i->second;   
        }
        ll c = gcd(p, k); 
        p/=c; 
        k/=c; 
        ll d = raise(k, mod - 2);  
        ll ans = ((p % mod) * (d % mod)) % mod; 
        cout<<ans<<endl; 
    }
    return 0;
}