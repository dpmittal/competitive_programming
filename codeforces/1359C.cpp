#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        ld c, h, t;
        cin>>h>>c>>t;
        ld re = t - (c+h)/2;
        if(h==t)
            cout<<1<<endl;
        else if(re==0)
            cout<<2<<endl;
        else{
            ll num = (h-t);
            ll den = 2*t - h -c;
            ll ans2 = (h-t)/(2*t-h-c);
            if(num%den==0)
                cout<<(2*(ans2))+1<<endl;
            else{
                ld ans_1 = (ans2*c + (ans2+1)*h) / (2*ans2+1);
                ld ans_2 = ((ans2+1)*c + (ans2+2)*h) / (2*ans2+3);
                // cout<<ans_1<<" "<<ans_2<<endl;
                if(abs(t-ans_1)<=(abs(t-ans_2)))
                    cout<<(2*(ans2))+1<<endl;
                else
                    cout<<(2*(ans2+1))+1<<endl;
            }
        }

    }
    return 0;
}