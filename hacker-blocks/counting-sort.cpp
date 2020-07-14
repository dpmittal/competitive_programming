#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int *a = new int[n];
    map<int, int> m;

    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }

    for(auto it=m.begin(); it!=m.end();it++){
        int x = it->second;
        while(x--){
            cout<<it->first<<" ";
        }
    }

    cout<<'\n';
    return 0;
}