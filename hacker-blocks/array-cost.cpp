#include<iostream>
using namespace std;

int crossCount(int *a, int s, int e){
    int i = s;
    int m = (s + e) / 2;
    int j = m+1;
    int cnt = 0;

    int n = sizeof(a) / sizeof(int);

    int *temp = new int[n];
    int k = s; 
    while(i<=m && j<=e){
        if(a[i] > a[j]){
            temp[k] = a[j];
            k++; j++;
            cnt += (m - i + 1);
        }

        else{
            temp[k] = a[i];
            k++;
            i++;
        }
    }

    while(i<=m){
        temp[k++] = a[i++];
    }

    while(j<=e){
        temp[k++] = a[j++];
    }

    for(int i = s; i <= e; i++){
        a[i] = temp[i];
    }

    return cnt;
}

int arrayCost(int *a, int s, int e){
    if(s >= e){
        return 0;
    }

    else{
        int m = (s+e)/2;
        int left = arrayCost(a,s,m);
        int right = arrayCost(a,m+1,e);
        return left + right + crossCount(a, s, e);
    }
}

int main(){

    short int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int *a = new int[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        cout<<arrayCost(a, 0, n - 1)<<'\n';
    }
    return 0;
}