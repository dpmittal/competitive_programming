#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<pair<ll, ll>> arr(n, {0, 0});
    for(int i=0;i<n;i++)
        cin>>arr[i].first;
    for(int i=0;i<n;i++)
        cin>>arr[i].second;
    for(int i=0;i<q;i++){
        ll a, b, c;
        cin>>a>>b>>c;
        if(a==1)
            arr[b-1].second = c;
        else{
            ll ma = arr[b-1].second;
            ll ptr = b-1;
            if(arr[b-1].first<=arr[c-1].first && b!=c){
                cout<<-1<<endl;
                continue;
            }
            else if(b==c){
                cout<<arr[b-1].second<<endl;
                continue;
            }
            if(b<=c){
                ll j = b;
                for(ll z=j;z<c-1;z++){
                    if(arr[z].first>=arr[b-1].first){
                        ma = -1;
                        break;
                    }
                }
                if(ma==-1){
                    cout<<ma<<endl;
                    continue;
                }
                while(j<c-1){
                    ll mi = LONG_MIN, ind = c-1;
                    for(ll z=j;z<c-1;z++){
                        if(mi<=arr[z].first && arr[z].first<arr[j-1].first){
                            ind = z;
                            mi = arr[z].first;
                        }
                    }
                    if(mi<=arr[c-1].first)
                        break;
                    ma+=arr[ind].second;
                    j = ind+1;
                }
            }
            else{
                ll j = b-2;
                for(ll z=j;z>c-1;z--){
                    if(arr[z].first>=arr[b-1].first){
                        ma = -1;
                        break;
                    }
                }
                if(ma==-1){
                    cout<<ma<<endl;
                    continue;
                }
                while(j>c-1){
                    ll mi = LONG_MIN, ind = c-1;
                    for(ll z=j;z>c-1;z--){
                        if(mi<=arr[z].first && arr[z].first<arr[j+1].first){
                            ind = z;
                            mi = arr[z].first;
                        }
                    }
                    if(mi<=arr[c-1].first)
                        break;
                    ma+=arr[ind].second;
                    j = ind-1;
                }
            }
            if(ma==-1)
                cout<<ma<<endl;
            else{
                ma+=arr[c-1].second;
                cout<<ma<<endl;
            }
        }
    }
    return 0;
}