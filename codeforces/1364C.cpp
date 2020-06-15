#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int ma = -1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ma = max(ma, arr[i]);
    }
    int count[ma] = {0};
    for(int i=0;i<ma;i++)
        count[i]++;
    vector<int> ans;
    for(int i=0;i<n;i++){
        int j = 0;
        while((arr[i]==j || count[j]==0) && j<ma){
            j++;
        }
        if(j<ma){
            count[j]--;
            ans.push_back(j);
        }
        else{
            if(arr[i]==0)
                ans.push_back(arr[i]+1);
            else
                ans.push_back(arr[i]-1);
        }
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}