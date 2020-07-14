#include<bits/stdc++.h>
using namespace std;

bool duplicateCheck(string c){
    stack<char> s;

    for(char character: c){
        if(character == ')'){
            char t = s.top();
            s.pop();

            if(t == '(') return true;

            else{
                while(t != '('){
                    t = s.top();
                    s.pop();
                }
            }
        }

        else{
            s.push(character);
        }
    }

    return false;
}

int main(){

    short t;
    cin>>t;
    while(t--){
        string c;
        cin>>c;
        if(duplicateCheck(c)) cout<<"Duplicate\n";
        else cout<<"Not Duplicates\n";
    }
    return 0;
}