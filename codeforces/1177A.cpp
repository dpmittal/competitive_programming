#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int  n;
    cin>>n;
    string s = "";
    int i = 1;
    while(s.length()<n){
        s+=to_string(i);
        i++;
    }
    cout<<s[n-1]<<endl;
    return 0;
}