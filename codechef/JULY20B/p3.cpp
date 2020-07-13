#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int n;
        cin>>n;
        int l = 64-n;
        for(int i=1;i<=l;i++){
            cout<<"X";
            if(i%8==0)
                cout<<endl;
        }
        int count = l%8;
        for(int i=1;i<=n-1;i++){
            cout<<".";
            if((count+i)%8==0)
                cout<<endl;
        }
        cout<<"O"<<endl;
    }
    return 0;
}