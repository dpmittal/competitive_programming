#include<bits/stdc++.h>
#define ll long long
#define PII pair<long,long>
using namespace std;
const int MAX = 1e4 + 5;
bool marked[MAX];

struct node
{
    ll id;
    bool vert;
    unordered_set<string> s;
};

long long prim(vector<vector<int>> adj, vector<int> &h_res)
{
  priority_queue<PII, vector<PII>, greater<PII> > Q;
  int y;
  ll x;
  long long minimumCost = 0;
  PII p;
  Q.push(make_pair(0, 0));
  while(!Q.empty())
  {
    p = Q.top();
    Q.pop();
    x = p.second;
    if(marked[x] == true)
      continue;
    h_res.push_back(x); 
    minimumCost += p.first;
    marked[x] = true;
    for(int i = 0;i < adj[x].size();++i)
    {
      if(marked[i] == false)
          Q.push(make_pair(adj[x][i],i));
    }
  }
  return minimumCost;
}

int main(){
  string input_file, output_file;
  cout<<"Input File:-\n";
  cin>>input_file;
  cout<<"Output File:-\n";
  cin>>output_file;
  ifstream inp;
  ofstream out;
  inp.open(input_file);
  out.open(output_file, ios::trunc);
  ll itr;
  inp>>itr;
  vector<vector<string>> tags;
  vector<node> pics_h, pics_v;
  long double count=0;
  for(ll i=0;i<itr;i++){
    char ch;
    int n;
    string s;
    vector<string> k;
    inp>>ch>>n;
    string tag;
    if(ch=='H'){
      node obj;
      obj.id = i;
      obj.vert = false;
      for(ll j=0;j<n;j++)
      {
        inp >> tag;
        obj.s.insert(tag);
      }
      pics_h.push_back(obj);
    }
    else
    {
      node obj;
      obj.id = ch;
      obj.vert = true;
      for(ll j=0;j<n;j++)
      {
        inp >> tag;
        obj.s.insert(tag);
      }
      pics_v.push_back(obj);
    }
  }
  vector<vector<int>> adj;
  for(ll i=0; i<pics_h.size(); i++)
  {
    for(ll j=0; j<pics_h.size(); j++)
    {
      unordered_set<string> aux;
      int d1, d2, com;
      set_difference(pics_h[i].s.begin(),pics_h[i].s.end(), pics_h[j].s.begin(), pics_h[j].s.end(), aux.begin());
      d1 = aux.size();
      aux.clear();
      set_difference(pics_h[j].s.begin(),pics_h[j].s.end(), pics_h[i].s.begin(), pics_h[i].s.end(), aux.begin());      d2 = aux.size();
      aux.clear();
      set_intersection(pics_h[i].s.begin(),pics_h[i].s.end(), pics_h[j].s.begin(), pics_h[j].s.end(), aux.begin());      com = aux.size();
      aux.clear();
      adj[i][j] = INT_MAX - min(min(d1,d2), com);
    }
  }
  vector<int> h_res;
  prim(adj, h_res);
  return 0;
}
