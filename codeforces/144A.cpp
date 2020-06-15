#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, k;
    cin>>n;
    int mi = INT_MAX, ma = INT_MIN;
    int mi_ind = 0, ma_ind = n-1;
    for(int i=0;i<n;i++){
        cin>>k;
        if(k<=mi){
            mi = k;
            mi_ind = i;
        }

        if(k>ma){
            ma = k;
            ma_ind = i;
        }
    }
    int ans = (ma_ind-0)+(n-1-mi_ind);
    if(ma_ind<mi_ind)
        cout<<ans<<endl;
    else
        cout<<ans-1<<endl;
    return 0;
}