#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll distance(pair<ll, ll> p, pair<ll, ll> q){
    return (p.first - q.first) * (p.first - q.first) + (p.second - q.second) * (p.second - q.second);
}
ll crossp(pair<ll, ll> a, pair<ll, ll> b, pair<ll, ll> c){
    return a.first * b.second - a.second * b.first + b.first * c.second - b.second * c.first + c.first * a.second - c.second * a.first;
}

bool dir(pair<ll, ll> A, pair<ll, ll> B, pair<ll, ll> Q){
    ll ans=((B.first-A.first)*(Q.second-A.second)-(B.second-A.second)*(Q.first-A.first));
    return (ans>0);
}

bool incheck(vector<pair<ll, ll>> ply, pair<ll, ll> p) { 
    ll n = ply.size();
    bool d = dir(ply[n-1],ply[0],p);
    if(!d) 
      return d;
    for(ll i=0;i<n-1;i++)
        if(dir(ply[i],ply[i+1],p)!=d) 
          return false;
    return true;
} 

struct comparator{
    comparator(pair<ll, ll> R) : r(R){}
    bool operator ()(const pair<ll, ll> &a, const pair<ll, ll> &b) const{
        ll compPolar=crossp(a,r,b);
        ll compdistance=distance(a,r)-distance(b,r);
	      ll chk=(compPolar==0?compdistance:compPolar);
		    return (chk<0);
    }
    pair<ll, ll> r;
};
void sortdots(vector<pair<ll, ll>> &dots, pair<ll, ll> r){
	ll n=dots.size(),i=n-2;
  sort(dots.begin(), dots.end(), comparator(r));
  pair<ll, ll> p=dots[0], q=dots[n-1];
  while(i>=0 && crossp(p,q,dots[i])==0) 
    i--;
  for(ll l=i+1,h=dots.size()-1;l<h;l++,h--){
    pair<ll, ll> temp = dots[l];
    dots[l] = dots[h];
    dots[h] = temp;
  }
}
int main() {
  int itr;
  cin>>itr;
  while(itr--){
    ll n,q; 
    cin>>n>>q;
		vector<pair<ll, ll>> dots(n,make_pair(0,0));
		for(ll i=0;i<n;i++)
			cin>>dots[i].first>>dots[i].second;
    ll count=0;
    vector<vector<pair<ll, ll>>> plys;
    set<pair<ll,ll>> s;
    for(auto x:dots) 
      s.insert(x);
    while(true){
      vector<pair<ll, ll>> tmp;
      for(auto i:s)
        tmp.push_back(i);
      if(tmp.size()==0) 
        break;
      pair<ll, ll> p=tmp[0];
      for(pair<ll, ll> t:tmp)
        if(t.second<p.second || t.second==p.second && t.first<p.first)
            p=t;
      sortdots(tmp,p);
      stack<pair<ll, ll>> stack;
      stack.push(tmp[0]);
      stack.push(tmp[1]);
      for(ll i=2;i<tmp.size();i++){
        pair<ll, ll> top=stack.top();
        stack.pop();
        while(crossp(stack.top(),top,tmp[i])<0){
            top=stack.top();
            stack.pop();
        }
        stack.push(top);
        stack.push(tmp[i]);
      }
	    vector<pair<ll, ll>> vec;
      while(!stack.empty()){
		    pair<ll, ll> t=stack.top();
		    s.erase(make_pair(t.first,t.second));
        stack.pop();
        vec.push_back(t);
      }
	    reverse(vec.begin(),vec.end());    
      plys.push_back(vec);
    }
    for (ll i=0;i<q;i++){
      ll X,Y;
      ll ans=0;
      cin>>X>>Y;
      for (auto p:plys){
        if (p.size()<=2) 
          break;
        if (incheck(p,{X,Y})) 
          ans++;
        else 
          break;
      }
      cout<<ans<<endl;
    }
  }
  return 0;
}