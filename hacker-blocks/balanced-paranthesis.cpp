#include<bits/stdc++.h>
using namespace std;

bool checkParenthesis(char *p){
    stack<char> s;
    for(int i=0;i<strlen(p);i++){
        if(p[i] == '(' || p[i] == '{' || p[i] == '['){
            s.push(p[i]);
            continue;
        }

        if(s.empty()){
            return false;
        }
        
        char x;
        switch(p[i]){
            case ')':
                x=s.top();
                s.pop();
                if(x=='{' or x=='['){
                    return false;
                }
            break;

            case '}':
                x=s.top();
                s.pop();
                if(x=='(' or x=='['){
                    return false;
                }
            break;

            case ']':
                x=s.top();
                s.pop();
                if(x=='{' or x=='('){
                    return false;
                }
            break;
        }
    }
    return s.empty();
}

int main(){

    char p[1000000];
    cin.getline(p,1000000);
    if(checkParenthesis(p)){
        cout<<"Yes\n";
    }

    else{
        cout<<"No\n";
    }
    return 0;
}