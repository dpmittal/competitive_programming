#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //Algo
    int s = 0;
    int e = n - 1;
    while(s<=e){
       int m = (s+e)/2;
       
       if(m < e && a[m] > a[m + 1]){
           cout<<m<<'\n';
           break;
       }
       
       if(m > s && a[m] < a[m - 1]){
           cout<<m-1<<'\n';
           break;
       }

       if(a[s] >= a[m]){
           e = m - 1;
       }

       else{
           s = m + 1;
       }
    }

    return 0;   
}