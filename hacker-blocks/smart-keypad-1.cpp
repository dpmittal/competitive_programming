#include<bits/stdc++.h>
using namespace std;

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void printSmartKeypad(char *x, char *y, int i){
    if(x[i] =='\0'){
        y[i] = '\0';
        cout<<y<<'\n';
        return;
    }    

    int key = x[i] - '0';
    for(int j = 0; j < table[key].length(); j++){
        y[i] = table[key][j];
        printSmartKeypad(x,y,i+1);
    }
}

int main(){

    char *x = new char[10];
    char *y = new char[10];
    cin.getline(x, 10);
    int n = sizeof(x)/sizeof(char);
    printSmartKeypad(x,y,0);
    return 0;
}