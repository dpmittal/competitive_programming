#include <bits/stdc++.h>
using namespace std;

int longestConsecutiveCharacter(char *a){
    int count=1;
    int maxCount=1;
    for(int i=1;i<strlen(a);i++){
        if(a[i] == a[i-1]){
            count++;
        }

        else{
            maxCount = max(count, maxCount);
            count=1;
        }
    }
    return max(maxCount, count);
}

int main(){
    char *a = new char[1000000];
    cin.getline(a, 1000000);
    cout<<longestConsecutiveCharacter(a)<<"\n";
    return 0;
}