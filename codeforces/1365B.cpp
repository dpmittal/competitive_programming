#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        bool same = true;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(i>0)
                if(b[i]!=b[i-1])
                    same= false;
        }
        bool flag =true;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                flag = false;
                break;
            }
        }
        if(flag || !same)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}