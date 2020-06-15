#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    long double ans = 0;
    for(int j=k;j<=n;j++){
        ll ma = LONG_MIN;
        ll sum = 0, l = 0;
        for(int i=0;i<n;i++){
            if(i>=j){
                sum-=l;
                if(sum>ma)
                    ma = sum;
                l = arr[i-j];
            }
            sum+=arr[i];
        }
        if(ma<(sum-l))
            ma = sum-l;
        if((double)(ma/j)>ans)
            ans = (double)ma/j;
    }
    cout<<fixed<<setprecision(15)<<ans<<endl;
    return 0;
}