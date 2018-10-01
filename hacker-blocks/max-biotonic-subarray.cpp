#include<bits/stdc++.h>
using namespace std;

int main(){

    short int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;

        int *a = new int[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        //Algo

        int *inc = new int[n];
        int *dec = new int[n];

        inc[0] = 1;
        dec[n - 1] = 1;
        for(int i = 1; i < n; i++){
            
            //increasing pre compute
            if(a[i] > a[i - 1]){
                inc[i] = inc[i - 1] + 1;
            }

            else{
                inc[i] = 1;
            }

            //decreasing precompute
            if(a[n - 1 - i] > a[n - 1 - i + 1]){
                dec[n - 1 - i] = dec[n - 1 - i + 1] + 1;
            }

            else{
                dec[n - 1 - i] = 1;
            }
        }

        int maxi = INT_MIN;
        for(int i = 0; i < n; i++){
            maxi = max(inc[i] + dec[i] - 1, maxi);
        }


        cout<<maxi<<'\n';
    }
    return 0;
}