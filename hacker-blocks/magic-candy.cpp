#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void print(priority_queue<ll> h){
    
}

int main(){

    short t;
    cin>>t;
    priority_queue<ll, vector<ll> > h;
    while(t--){

        int n,k;
        ll a;
        cin>>n>>k;
        h = priority_queue<ll>();
        for(int i=0;i<n;i++){
            cin>>a;
            h.push(a);
        }
        
        //Algo- Take maximum of all and insert max/2 into heap again. Do this while time lasts
        ll res=0;
        while(k-- && !h.empty()){
            ll current = h.top();
            res += current;
            h.pop();
            current /=2;
            if(current != 0){
                h.push(current);
            }
        }   
        cout<<res<<'\n';
    }
    return 0;
}