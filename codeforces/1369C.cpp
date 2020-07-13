#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int n, k;
        cin>>n>>k;
        ll arr[n];
        int w[k];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<k;i++)
            cin>>w[i];
        sort(arr, arr+n, ::greater<ll>());
        ll l = LONG_MIN;
        vector<pair<ll, ll>> v(k, {l, l});
        int j=0, i=0;
        while(i<n){
            j = 0;
            while(j<k && i<n){
                if(w[j]==0){
                    j++;
                    continue;
                }
                if(v[i].first==l)
                    v[j].first = arr[i];
                w[j]--;
                if(w[j]==0)
                    v[j].second = arr[i];
                j++; i++;

            }
        }
        ll ans = 0;
        for(int i=0;i<k;i++){
            ans+=v[i].first+v[i].second;
        }
        cout<<ans<<endl;
    }
    return 0;
}