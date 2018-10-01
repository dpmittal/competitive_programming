#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    short int t;
    cin>>t;
    while(t--){

        int n;
        ll x;
        cin>>n>>x;

        int *a = new int[n];

        for(int i = 0; i< n; i++){
            cin>>a[i];
        }

        //Algo
        bool flag = false;
        ll sum = 0;
        int ptr = 0;
        int i = 0;

        while(ptr < n){
            if(sum == x){
                flag = true;
                break;
            }

            else if(sum > x){
                sum -= a[ptr];
                ptr++;
            }

            else{
                if(i >= n){
                    break;
                }
                sum+=a[i];
                i++;
            }
        }

        if(flag){
            cout<<"YES\n";
        }

        else{
            cout<<"NO\n";
        }
    }
    return 0;
}