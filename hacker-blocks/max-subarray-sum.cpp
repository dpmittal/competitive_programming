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

        //Kadane's Algorithm

        int current_sum = 0;
        int max_sum = INT_MIN;

        for(int i = 0; i < n; i++){
            
            current_sum += a[i];
            if(current_sum < 0){
                current_sum = 0;
            }

            max_sum = max(max_sum, current_sum);
        }

        cout<<max_sum<<'\n';
    }
    return 0;
}