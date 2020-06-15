#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, k;
    cin>>n;
    int even = 0, odd = 0, count=0;
    for(int i=0;i<n;i++){
        cin>>k;
        if(k%2==0)
        {
            count++;
            even = i;
        }
        else
            odd = i;
    }
    if(count>1)
        cout<<odd+1<<endl;
    else
        cout<<even+1<<endl;
    return 0;
}