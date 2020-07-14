#include<bits/stdc++.h>
using namespace std;

int main(){

    short t;
    cin>>t;
    unordered_map<int, bool> m;
    while(t--){
        m.clear();
        int n;
        cin>>n;
        int a;

        for(int i=0;i<n;i++){
            cin>>a;
            m[a]=true;
        }

        int q;
        cin>>q;

        while(q--){
            int x;
            cin>>x;

            if(m[x]){
                cout<<"Yes\n";
            }

            else{
                cout<<"No\n";
            }
        }
    }
    return 0;
}