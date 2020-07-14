#include<bits/stdc++.h>
using namespace std;

string searchIn [] = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void printAll(char *x, char *y, int i){
    if(x[i] =='\0'){
        y[i] = '\0';
        string temp(y);

        for(auto search: searchIn){
            if(search.find(temp) != string::npos){
                cout<<search<<'\n';
            }
        }
        
        return;
    }    

    int key = x[i] - '0';
    for(int j = 0; j < table[key].length(); j++){
        y[i] = table[key][j];
        printAll(x,y,i+1);
    }
}

int main(){

    char str[20];
    cin>>str;
    char y[20];
    printAll(str, y, 0);
    return 0;
}