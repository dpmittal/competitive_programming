#include<bits/stdc++.h>
using namespace std;

int findConsecutiveOnes(char *num){
    int n = strlen(num);
    int currOnes = 0;
    int maxOnes = 0;

    for(int i=0;i<n;i++){
        if(num[i] - '0' == 1){
            currOnes++;
        }

        else{
            if(currOnes > maxOnes){
                maxOnes = currOnes;
            }
            currOnes = 0;
        }
    }

    maxOnes = max(currOnes, maxOnes);

    return maxOnes;
}

int main(){
    
    char in[10000];
    cin.getline(in, 10000);
    cout<<findConsecutiveOnes(in)<<"\n";
    return 0;
}