#include<bits/stdc++.h>
using namespace std;

bool myCompare(){
    
}

int main(){

    int n;
    cin>>n;
    char str[n][50];
    for(int i = 1; i <= n; i++){
        cin.getline(str[i], 50);
    }

    int key;
    string rev;
    string way;

    cin>>key>>rev>>way;
    bool r;
    if(rev.compare("false") == 0){
        r = false;
    }

    else{
        r = true;
    }

    int w;
    if(way.compare("numeric") == 0){
        w = 0;
    }

    else{
        w = 1;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j <strlen(str[i]); j++){
            cout<<str[i][j];
        }

        cout<<'\n';
    }
    return 0;
}