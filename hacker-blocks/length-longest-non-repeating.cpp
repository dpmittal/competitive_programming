#include<bits/stdc++.h>
using namespace std;

int longestNonRepeating(string s){
    if(s.empty()){
        return 0;
    }
    int visited[256];
    for(int i=0;i<256;i++){
        visited[i]=-1;
    }
    
    int currentLen=1;
    int maxLen=1;

    visited[s[0]]=0;
    for(int i=1;i<s.length();i++){
        int lastOcc = visited[s[i]];
        if(lastOcc == -1 or i - currentLen > lastOcc){
            currentLen+=1;
            if(currentLen > maxLen){
                maxLen = currentLen;
            }
        }

        else{
            if(currentLen > maxLen){
                maxLen = currentLen;
            }
            currentLen = i - lastOcc;
        }

        visited[s[i]] = i;
    }

    if(currentLen > maxLen){
        maxLen = currentLen;
    }

    return maxLen;
}

int main(){

    string x;
    getline(cin, x);
    cout<<longestNonRepeating(x)<<"\n";
    return 0;
}