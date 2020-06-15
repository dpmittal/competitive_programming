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
        vector<int> sol;
        sol.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i-1]<arr[i]){
                int d = arr[i];
                while(arr[i]>arr[i-1] && i<n){
                    d = arr[i];
                    i++;
                }
                // cout<<d<<endl;
                sol.push_back(d);
                i--;
            }
            else{
                int d = arr[i];
                while(arr[i-1]>arr[i] && i<n){
                    d = arr[i];
                    i++;
                }
                // cout<<d<<endl
                sol.push_back(d);
                i--;
            }
        }
        int k = sol.size();
        cout<<sol.size()<<endl;
        for(int i=0;i<k;i++)
            cout<<sol[i]<<" ";
        cout<<endl; 

    }
    return 0;
}