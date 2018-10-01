#include<bits/stdc++.h>
using namespace std;

vector <string> s;

void codesOfTheString(char *a, char *out, int i, int j){
    //Base case
    if(a[i] == '\0'){
        out[j] = '\0';
        string temp(out);
        s.push_back(temp);
        return;
    }

    //Recursive Case

    //1 digit at a time
    int digit = a[i] - '0';
    char ch = 'a' - 1 + digit;
    if(digit != 0){
        out[j] = ch;
        codesOfTheString(a,out,i+1,j+1);
    }

    //2 digits at a time. If first digit is 0 only then will second digit be considered. Hence putting it inside
    if(a[i + 1] != '\0'){
        int digit2 = a[i + 1] - '0';
        int no = 10*digit + digit2;

        if(no <= 26){
            char ch2 = 96 + no;
            out[j] = ch2;
            codesOfTheString(a,out,i+2,j+1);
        }
    }
    return;
}

int main(){

    char a[1000];
    char out[1000];

    cin>>a;
    codesOfTheString(a, out, 0, 0);
    cout<<"[";
    for(int i=0; i<s.size()-1;i++){
        cout<<s[i]<<", ";
    }
    cout<<s[s.size()-1]<<"]";
    return 0;
}