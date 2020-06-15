#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int n;
        cin>>n;
        int arr[n];
        int freq[8001]= {0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
            freq[arr[i]]++;
        }
        int sum[n];
        sum[0] = arr[0];
        for(int i=1;i<n;i++)
            sum[i] = arr[i]+sum[i-1];
        int count = 0;
        int prev = 0;
        for(int i=0;i<n;i++){
            for(int j=i+2;j<=n;j++){
                int d = sum[j-1]-prev;
                if(find(arr, arr+n, d)!=(arr+n) && freq[d]){
                    freq[d]--;
                    count++;
                }
            }
            prev = sum[i];
        }
        cout<<count<<endl;
    }
    return 0;
}