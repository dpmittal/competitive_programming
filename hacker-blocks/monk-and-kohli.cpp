#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int n;
    cin>>n;

    ll sum[n];

    for(int i=0;i<n;i++){
		sum[i]=0;
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<n;j++){
			ll x;
			cin>>x;
			sum[j]+=x;
		}
	}

    priority_queue<ll, vector<ll>, greater<ll> > h;

    for(int i=0;i<n;i++){
        h.push(sum[i]);
    }

    int q;
    cin>>q;
    while(q--){
        int k;
        cin>>k;
        
        if(k>h.size()){
            cout<<"-1\n";
        }

        else{
            ll temp[k-1];
			for(int i=0;i<k-1;i++){
				temp[i]=h.top();
				h.pop();
			}
			cout<<h.top()<<'\n';
			h.pop();
			for(int i=k-2;i>=0;i--){
				h.push(temp[i]);
			}
        }
    }
    return 0;
}