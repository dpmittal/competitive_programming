#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int n;
        ll k;
        cin>>n;
        int count = 0;
        int even = 0, odd = 0;
        for(int i=0;i<n;i++){
            cin>>k;
            if(k%2==0)
                even++;
            else
                odd++;
            if(k%2!=i%2)
                count++;
        }
        if((n%2==0 && even!=odd) || (n%2!=0 && even!=(odd+1)))
            cout<<-1<<endl;
        else
            cout<<count/2<<endl;
    }
    return 0;
}