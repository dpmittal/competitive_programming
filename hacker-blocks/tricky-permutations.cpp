#include<bits/stdc++.h>
using namespace std;

set<string> co;

void printTrickyPermutations(char *a, int s, int e){      
    if(s==e){
        string temp(a);
        co.insert(temp);
        return;
    }

    for(int i=s;i<=e;i++){
        swap(a[s], a[i]);
        printTrickyPermutations(a,s+1,e);
        swap(a[s], a[i]);
    }
}

int main(){

    char a[10];
    cin>>a;
    char out[10];
    printTrickyPermutations(a,0,strlen(a)-1);
    set<string>::iterator it;

    for(it=co.begin();it!=co.end();++it){
        cout<<(*it)<<'\n';
    }
    return 0;
}