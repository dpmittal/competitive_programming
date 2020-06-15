#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int count = 0, k;
        int p;
        for(int i=0;i<5;i++){
            cin>>k;
            count+=k;
        }
        cin>>p;
        if(count*p<=120){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}