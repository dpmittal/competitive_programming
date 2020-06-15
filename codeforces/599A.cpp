#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr, arr+3);
    cout<<min(2*(arr[0]+arr[1]), arr[0]+arr[1]+arr[2])<<endl;
    return 0;
}