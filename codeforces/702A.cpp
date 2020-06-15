#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int ma = 1, curr = 1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1])
            curr++;
        else{
            if(ma<curr)
                ma = curr;
            curr = 1;
        }
    }
    if(ma<curr)
        ma = curr;
    cout<<ma<<endl; 
    return 0;
}