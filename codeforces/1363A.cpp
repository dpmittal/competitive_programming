#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int n, x;
        cin>>n>>x;
        int arr[n];
        int count = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2!=0)
                count++;
        }
        if(x==n){
            if(count%2!=0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else if(x%2==0){
            if(count!=n && count!=0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else{
            if(count!=0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}