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
        int count_e = 0, count_o = 0, count_d = 0;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        for(int i=0;i<n;i++){
            if(arr[i]%2==0)
                count_e++;
            else
                count_o++;
            if(i!=n-1)
                if(arr[i+1]-arr[i]==1)
                    count_d++;
        }
        if((count_o%2==0 && count_e%2==0) || (count_e%2!=0 && count_o%2!=0 && count_d>0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
    return 0;
}