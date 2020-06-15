#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int n, x;
        cin>>n>>x;
        int ele[n];
        cin>>ele[0];
        bool flag = false;
        for(int i=1;i<n;i++){
            cin>>ele[i];
            ele[i]+=ele[i-1];
        }
        int cal = -1, direct=-1;
        for(int i=n-1;i>=0;i--){
            if(ele[i]%x!=0)
                direct = max(direct, i+1);
            else if(ele[i]%x==0 && !flag){
                flag = true;
                cal = i;
            }
            if(direct!=-1 && flag)
                break;
        }
        flag = false;
        for(int i=0;i<cal;i++){
            if((ele[cal]-ele[i])%x!=0){
                cal = cal-i;
                flag=true;
                break;
            }
        }
        if(flag)
            cout<<max(cal, direct)<<endl;
        else
            cout<<direct<<endl;
    }
    return 0;
}