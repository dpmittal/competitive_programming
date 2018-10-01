#include<bits/stdc++.h>
using namespace std;

string pi = "3.14";

void replacePi(char *in, char *out, int i, int j){
    //Base case
    if(in[i] == '\0'){
        out[j] = '\0';
        return;
    }

    //Recursive case
    if(in[i] == 'p' && in[i+1] == 'i'){
        int index = j;
        for(int k=0;k<pi.length();k++){
            out[index++] = pi[k];
        }

        replacePi(in, out, i+2, j+4);
    }

    else{
        out[j] = in[i];
        replacePi(in, out, i+1, j+1);
    }
}

int main(){

    short int t;
    cin>>t;
    while(t--){
        char in[1005];
        char out[100000];
        cin>>in;
        replacePi(in, out, 0, 0);
        cout<<out<<'\n';
    }
    return 0;
}