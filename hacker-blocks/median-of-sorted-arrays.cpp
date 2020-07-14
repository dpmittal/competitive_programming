#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int *a = new int[n];
    int *b = new int[n];

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    for(int i = 0; i < n; i++){
        cin>>b[i];
    }

    int i = 0, j = 0;
    int k = 0;
    int *c = new int[2*n];

    while(i<n && j <n){
        if(a[i] > b[j]){
            c[k] = b[j];
            k++; j++;
        }

        else{
            c[k] = a[i];
            k++;
            i++;
        }
    }

    while(i<n){
        c[k++] = a[i++];
    }

    while(j<n){
        c[k++] = b[j++];
    }

    int m = (2*n - 1)/2;
    cout<<(c[m] + c[m + 1]) / 2;
    return 0;
}