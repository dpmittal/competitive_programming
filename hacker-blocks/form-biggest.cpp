#include<bits/stdc++.h>
#include<string>
using namespace std;

bool myCompare(string a, string b){
    string ab = a.append(b);
    string ba = b.append(a);

    return (ab.compare(ba) > 0 ? 1: 0);
}

int main(){

    short int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        string a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        sort(a, a + n, myCompare);
        
        for(int i = 0; i < n; i++){
            cout<<a[i];
        }
        cout<<'\n';
    }
    return 0;
}