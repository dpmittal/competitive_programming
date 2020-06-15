#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int sub[26] = {0};
    int res[26] = {0};
    string a, b, c;
    cin>>a>>b>>c;
    for(int i=0;i<a.length();i++)
        sub[a[i]-'A']++;
    for(int i=0;i<b.length();i++)
        sub[b[i]-'A']++;
    for(int i=0;i<c.length();i++)
        res[c[i]-'A']++;
    bool flag = true;
    for(int i=0;i<26;i++){
        if(sub[i]!=res[i]){
            flag = false;
            break;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}