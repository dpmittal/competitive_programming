#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int key;
    cin>>key;

    int s=0;
    int e = n-1;
    int pos = -1;
    while(s<=e){
        int m = (s+e)/2;
        if(a[m]==key){
            pos = m;
            break;
        }

        if(a[e]>=a[m]){
            if(key>a[m] && key <= a[e]){
                s = m + 1;
            }

            else{
                e = m - 1;
            }
        }

        if(a[s]<=a[m]){
            if(key<a[m] && key>=a[s]){
                e = m-1;
            }

            else{
                s = m+1;
            }
        }
    }

    cout<<pos<<'\n';
    return 0;
}