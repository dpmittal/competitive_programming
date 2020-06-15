#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int a[3] = {0};
        int n;
        cin>>n;
        int k;
        bool flag = true;
        for(int i=0;i<n;i++){
            cin>>k;
            if(k==5)
                a[0]++;
            else if(k==10){
                if(a[0]){
                    a[0]--;
                    a[1]++;
                }
                else
                    flag = false;
            }
            else if(k==15){
                if(a[1]){
                    a[1]--;
                    a[2]++;
                }
                else if(a[0]>=2){
                    a[0]-=2;
                    a[2]++;
                }
                else
                    flag = false;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
            
    }
    return 0;
}