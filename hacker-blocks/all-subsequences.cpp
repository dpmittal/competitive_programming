#include<bits/stdc++.h>
using namespace std;

set<string> s;

void printAllSubsequences(char *a, char *out, int i, int j){
    if(a[i] == '\0'){
        out[j] = '\0';
        string temp(out);
        s.insert(temp);
        return;
    }

    printAllSubsequences(a,out,i+1,j);
    out[j] = a[i];
    printAllSubsequences(a,out,i+1,j+1);
}

int main(){

    short int t;
    cin>>t;
    while(t--){
        s.clear();
        char a[20];
        cin>>a;
        char out[100];
        printAllSubsequences(a,out,0,0);
        set<string>::iterator it;
        for(it=s.begin();it!=s.end();it++){
            cout<<(*it)<<'\n';
        }
    }
    return 0;
}