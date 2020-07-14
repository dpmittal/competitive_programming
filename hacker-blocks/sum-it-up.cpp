#include<bits/stdc++.h>
using namespace std;

set<char*> s;

void sumItUp(int *a, char *out, int i, int j, int t, int n){
    //Base case
    if(t==0){
        out[j]='\0';
        s.insert(out);
        return;
    }

    if(i>n or t<0){
        return;
    }

    //Recursive
}

int main(){

    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int t;
    cin>>t;
    return 0;
}