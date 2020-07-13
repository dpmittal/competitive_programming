#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    ll n, d, k, ma;
    cin>>n>>d;
    vector<ll> arr, a;
    bool flag  = true;
    for(ll i=0;i<n;i++){
      cin>>k;
      arr.push_back(k);
      a.push_back(k);
    }
    stable_sort(a.begin(), a.end());
    for(ll i=1;i<n;i++){
      if(d!=(a[i]-a[i-1]))
        flag = false;
    }
    ll count = 0;
    for(ll int i=1;i<n;i++){
  		ll int val = arr[i];
  		ll int hole = i;
  		while(hole>0 && arr[hole-1]>val){
  			arr[hole] = arr[hole-1];
  			hole--;
        count++;
		    }
		  arr[hole] = val;
	  }
    if(flag)
      cout<<count<<endl;
    else
      cout<<-1<<endl;
  }
  return 0;
}
