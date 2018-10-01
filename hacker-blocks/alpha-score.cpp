#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll scoreRoutine(int *a, int s, int e){
    ll sum=0;
    for(int i=s;i<=e;i++){
        if(a[i] < a[e+1]){
            sum += a[i];
        }
    }

    return sum;
}

void alpha(int *a, int s, int e, ll &total){
    
    if(s < e){
        int m = (s+e)/2;

        total += scoreRoutine(a,s,m-1);
        cout<<total<<"\n";
        alpha(a, s, m-1, total);
        alpha(a,m+1,e,total);
    }
}


int main(){

    int n;
    cin>>n;
    
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    ll total=0;
    alpha(a,0,n-1,total);
    cout<<total<<"\n";
    return 0;
}