#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int arr[3];
    for(int i=0;i<3;i++)
        cin>>arr[i];
    sort(arr, arr+3);
    cout<<max((arr[0]+arr[1])*arr[2], arr[0]*arr[1]*arr[2])<<endl;
    return 0;
}