#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isqual(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    // for(int i=0;i<a.size();i++)
    //     cout<<a[i]<<" ";
    // cout<<endl;
    // for(int i=0;i<b.size();i++)
    //     cout<<b[i]<<" ";
    // cout<<endl;
    if(a==b)
        return true;
    else
        return false;
    
}
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int n, k;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>k;
            v.push_back(k);
        }
        bool flag = false;
        int i;
        vector<int> ans;
        for(i=1;i<=1024;i++){
            for(int j=0;j<n;j++)
                ans.push_back(v[j]^i);
            if(isqual(ans, v)){
                flag = true;
                break;
            }
            else
                ans.clear();
        }
        if(flag)
            cout<<i<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}