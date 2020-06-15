#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int a, b;
        cin>>a>>b;
        int req = ceil(sqrt(2*(a*b)));
        int req_s = min(2*a, 2*b);
        req_s = (req_s>=max(a, b))? req_s: max(a, b);
        if(req>req_s)
            cout<<req*req<<endl;
        else
        {
                cout<<req_s*req_s<<endl;
        }
        
    }
    return 0;
}