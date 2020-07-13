#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        ll n, x, l, ans;
        cin>>n>>x;
        ll mi = LONG_MIN;
        vector<ll> arr(n, 0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(mi<arr[i])
                mi = arr[i];
        }
        if(mi<=x)
            cout<<n<<endl;
        else{
            sort(arr.begin(), arr.end());
            ll count = 0, ans = 0;
            while(count<n){
                auto i = lower_bound(arr.begin(), arr.end(), x);
                if(i==arr.end())
                    break;
                bool flag = false;
                auto j = i;
                if(i==arr.begin())
                    flag  = true;
                else
                    j--;
                if(*i==x){
                    *i = 0;
                    count++;
                    x*=2;
                }
                else if(!flag && (*j*2)>=x && *j<x){
                    x = *j*2;
                    *j = 0;
                    count++;
                }
                else if((*i*2)>=x && *i<x){
                    x = *i*2;
                    *i = 0;
                    count++;
                }
                else
                    x*=2;
                ans++;
            }
            ans+=n-count;
            cout<<ans<<endl;
        }
    }
    return 0;
}