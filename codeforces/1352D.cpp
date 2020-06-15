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
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int i=0, j=n-1;
        int a = 0, b = 0, c = 1, prev_a = 0, prev_b=0;
        while(i<=j){
            if(c%2!=0){
                int curr = 0;
                while(curr<=prev_b && i<=j){
                    curr+=arr[i];
                    i++;
                }
                a+=curr;
                prev_a = curr;
            }
            else{
                int curr = 0;
                while(curr<=prev_a && j>=i){
                    curr+=arr[j];
                    j--;
                }
                b+=curr;
                prev_b = curr;
            }
            c++;
        }
        cout<<c-1<<" "<<a<<" "<<b<<endl;
    }
    return 0;
}