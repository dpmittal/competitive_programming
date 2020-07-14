#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int *a = new int[n];
        for(int i = 0 ; i < n; i++){
            cin>>a[i];
        }

        //Algo
        int subset_sum;
        bool flag = false;

        for(int mask = 1; mask < (1<<n); mask++){
            bitset<32> b = mask;
            subset_sum = 0;
            for(int i = 0; i < n; i++){
                if(b[i] == 1){
                    subset_sum += a[i];
                }
            }

            if(subset_sum == 0){
                flag = true;
                break;
            }
        }

        if(flag){
            cout<<"Yes\n";
        }

        else{
            cout<<"No\n";
        }
    }
}