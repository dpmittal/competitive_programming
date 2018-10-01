#include<bits/stdc++.h>
using namespace std;

int hash(string x){
    int res=0;

}

int main(){

    short t;
    cin>>t;
    map<char, int> m;

    while(t--){
        string sonu;
        string titu;

        cin>>sonu;
        cin>>titu;
        m.clear();

        for(char x: sonu){
            m[x]++;
        }

        for(char x: titu){
            m[x]--;
        }

        int changes=0;

        for(auto it=m.begin();it!=m.end();it++){
            changes+=abs(it->second);
        }
        cout<<changes<<'\n';
    }
    return 0;
}