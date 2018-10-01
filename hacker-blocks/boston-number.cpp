#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sumOfDigits(int n){
    ll res=0;
    while(n){
        res += (n%10);
        n /=10;
    }
    return res;
}

ll sumOfPrimeFactors(int n){
    ll res=0;

    while(n%2==0){
        res+=2;
        n/=2;
    }

    for(int i=3;i<=sqrt(n);i=i+2){
        while(n%i==0){
            res+=sumOfDigits(i);
            n/=i;
        }
    }

    if(n>2){
        res+=sumOfDigits(n);
    }

    return res;
}

int main(){

    int n;
    cin>>n;

    if(sumOfDigits(n)== sumOfPrimeFactors(n)){
        cout<<"1\n";
    }

    else{
        cout<<"0\n";
    }

    return 0;
}