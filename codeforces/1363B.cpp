#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        string s;
        cin>>s;
        int n = s.length();
        int left[n] = {0};
        int right[n] = {0};
        left[0] = (s[0]=='0');
        for(int i=1;i<n;i++)
            left[i] = (s[i]=='0') || left[i-1];
        right[n-1] = (s[n-1]=='0');
        for(int i=n-2;i>=0;i--)
            right[i] = (s[i]=='0') || right[i+1];
        int count = 0;
        bool f = false;
        for(int i=0;i<n;i++){
            if(f==false){
                if((left[i] && right[i]) && s[i]=='1')
                    count++;
                else if(s[i]=='1')
                    f = true;
            }
            else{
                if((left[i] || right[i]) && s[i]=='1')
                    count++;
                // cout<<left[i]<<" "<<right[i]<<" "<<i<<endl;           
            }
        }
        cout<<count<<endl; 

    }
    return 0;
}