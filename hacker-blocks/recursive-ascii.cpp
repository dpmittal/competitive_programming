#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll countAsciiSub(char *a, int i){
    if(a[i] == '\0'){
        return 1;
    }

    return 3*countAsciiSub(a,i+1);
}

void printAsciiSub(char *a, char *out, int i, int j){
    if(a[i] == '\0'){
        out[j] = '\0';
        cout<<out<<" ";
        return;
    }

    //1. Recursive call by not selecting ith character
    printAsciiSub(a,out,i+1,j);
    //2. Recursive call by selecting ith character
    out[j] = a[i];
    printAsciiSub(a,out,i+1,j+1);
    //3. Recursive call by not selecting ith character ascii
    int num = int(a[i]);
    int k = 0;
    
    //100's place
    int d = num / 100;
    if(d != 0){
        out[j + k] = d + '0';
        k++;
    }

    //10's place
    d = (num % 100)/10;
    out[j+k] = d + '0';
    k++;
    
    //1's place
    d = (num%100)%10/1;
    out[j+k] = d + '0';
    k++;

    printAsciiSub(a,out,i+1,j+k);
}

int main(){

    char *a = new char[10000000];
    cin.getline(a, 10000000);
    int n = sizeof(a) / sizeof(char);

    char *out = new char[100000000];

    cout<<countAsciiSub(a,0)<<'\n';
    
    printAsciiSub(a,out,0,0);
    cout<<'\n';
    return 0;
}