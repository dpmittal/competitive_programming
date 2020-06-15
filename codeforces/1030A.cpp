#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, k;
    cin>>n;
    bool flag = true;
    for(int i=0;i<n;i++){
        cin>>k;
        if(k==1)
            flag = false;
    }
    if(flag)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;
    return 0;
}