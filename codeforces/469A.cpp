#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, k;
    cin>>n;
    set<int> super;
    for(int i=1;i<=n;i++)
        super.insert(super.end(), i);
    set<int> sub;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        sub.insert(k);
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        sub.insert(k);
    }
    if(sub.size()==super.size())
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}