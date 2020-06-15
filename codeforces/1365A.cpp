#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int itr;
    cin>>itr;
    while(itr--)
    {
        long n,m;
        cin>>n>>m;
        int v[n][m] = {0};
        int r[n] = {0};
        int c[m] = {0};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x;
                cin>>x;
                v[i][j]=x;
                if(x==1){
                    c[j]=1;
                    r[i]=1;
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(r[i]==0 && c[j]==0){
                    count++;
                    r[i]=1;
                    c[j]=1;
                    break;
                }
            }
        }
        if(count%2==1)
            cout<<"Ashish"<<endl;
        else
            cout<<"Vivek"<<endl;
    }
   return 0;
}