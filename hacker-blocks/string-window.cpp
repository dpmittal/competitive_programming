#include<bits/stdc++.h>
using namespace std;

string stringWindow(string s, string t){
    int needToFind[256] = {0};
    for(int i=0;i<t.length();i++){
        needToFind[t[i]]++;
    }

    int hasFound[256] = {0};
    int minWindowLength = INT_MAX;
    int minWindowBegin = -1;
    int minWindowEnd = -1;
    int count = 0;

    for(int b=0, e=0;e<s.length();e++){
        if(needToFind[s[e]] == 0) continue;
        hasFound[s[e]]++;
        if(hasFound[s[e]] <= needToFind[s[e]]){
            count++;
        }

        if(count == t.length()){
            while(needToFind[s[b]] == 0 or hasFound[s[b]] > needToFind[s[b]]){
                if(hasFound[s[b]] > needToFind[s[b]]){
                    hasFound[s[b]]--;
                }
                b++;
            }

            int windowLength = e - b + 1;
            if(windowLength < minWindowLength){
                minWindowBegin = b;
                minWindowEnd = e;
                minWindowLength = windowLength;
            }
        }
    }

    if(minWindowBegin != -1){
        string res;
        for(int i=minWindowBegin;i<=minWindowEnd;i++){
            res += s[i];
        }
        return res;
    }
    
    else{
        return "";
    }
}

int main(){
    string s,t;
    getline(cin, s);
    getline(cin, t);
    cout<<stringWindow(s, t)<<"\n";
    return 0;
}