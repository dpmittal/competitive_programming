#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(!(a[i] & 1)){
            a[i]-=1;
        }
    }

    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}