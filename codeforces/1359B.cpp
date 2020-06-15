#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int n, m;
        double x, y;
        cin>>n>>m>>x>>y;
        ll ans = 0;
        ll r;
        char ch;
        for(int i=0;i<n;i++){
            int curr = 0;
            for(int j=0;j<m;j++){
                cin>>ch;
                if(ch=='.'){
                    curr++;
                }
                else{
                    if((y/2)<=x)
                        ans+= (curr/2)*y + (curr%2)*x;
                    else
                        ans+= curr*x;
                    curr = 0;
                }
            }
            if((y/2)<=x)
                ans+= (curr/2)*y + (curr%2)*x;
            else
                ans+= curr*x;
        }
        cout<<ans<<endl;
    }
    return 0;
}