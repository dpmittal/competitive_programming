#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
        int n;
        cin>>n;
        int a[n], b[n];
        int k;
        for(int i=0;i<n;i++){
            cin>>k;
            a[k-1] = i;
        }
        for(int i=0;i<n;i++){
            cin>>k;
            b[k-1] = i;
        }
        int res[n];
        for(int i=0;i<n;i++)
            res[i] = a[i]-b[i];
        int ans[n] = {0};
        for(int i=0;i<n;i++){
            if(res[i]<0)
                ans[n+res[i]]++;
            else
                ans[res[i]]++;
        }
        int ma = INT_MIN;
        for(int i=0;i<n;i++){
            if(ma<ans[i])
                ma = ans[i];
        }
        cout<<ma<<endl;
    return 0;
}