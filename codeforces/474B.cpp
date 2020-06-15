#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, m;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        arr[i] = arr[i]+arr[i-1];
    }
    cin>>m;
    int k;
    for(int i=0;i<m;i++){
        cin>>k;
        if(k<=arr[0])
            cout<<1<<endl;
        else{
            int s = 0, e = n-1;
            while(s<=e){
            int mid = (s+e)/2;
            if(arr[mid]>=k && arr[mid-1]<k){
                cout<<mid+1<<endl;
                break;
            }
            else if(arr[mid]<k)
                s = mid+1;
            else
                e = mid-1;
            }   
        }
        
    }
    return 0;
}