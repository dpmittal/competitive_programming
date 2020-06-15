#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int n;
        cin>>n;
        set<int> dist;
        int count[1001] = {0};
        vector<int> arr(n, 0);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        bool flag = true;
        int c=1, i;
        for(i=1;i<n;i++){
            if(arr[i-1]==arr[i])
                c++;
            else{
                if(count[arr[i-1]]!=0){
                    flag = false;
                    break;
                }
                count[arr[i-1]] = c;
                c = 1;
            }
        }
            if(count[arr[i-1]]!=0)
                flag = false;
            else
                count[arr[i-1]] = c;
            int d = 0;
            for(int i=1;i<=1000;i++){
                if(count[i]!=0){
                    dist.insert(count[i]);
                    d++;
                }
            }
            if(d!=dist.size())
                flag =false;
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}