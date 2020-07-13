#include<iostream>
using namespace std;

string replace(string s, int len, int ptr){
    if(ptr==len)
        return "";
    if(s[ptr]=='p' && s[ptr+1]=='i'){
        return "3.14"+replace(s, len, ptr+2);
    }
    return s[ptr]+replace(s, len, ptr+1);
}
int main() {
    int itr;
    cin>>itr;
    while(itr--){
        string s;
        cin>>s;
        cout<<replace(s, s.length(), 0)<<endl;
    }
	return 0;
}
