#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int n;
        cin>>n;
        int c =1;
        vector<int> ans;
        while(n>0){
            int d = n%10;
            n/=10;
            if(d!=0)
                ans.push_back(d*c);
            c*=10;
        }
        int k = ans.size();
        cout<<k<<endl;
        for(int c=k-1;c>=0;c--){
            cout<<ans[c]<<" ";
        }
        cout<<endl;
    }
    return 0;
}