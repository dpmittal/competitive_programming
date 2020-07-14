#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int *a = new int[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    //Binary Search
    int t;
    cin>>t;
    while(t--){

        int s = 0;
        int e = n - 1;
        int ansLow = -1;
        int ansUp = -1;
        int key;
        cin>>key;

        while(s <= e){
            int m = (s+e)/2;
            if(a[m] ==  key){
                ansLow = m;
                e = m - 1;
            }

            else if(a[m] > key){
                e = m - 1;
            }

            else{
                s = m + 1;
            }
        }

        s = 0;
        e = n - 1;
        while(s<=e){
            int m = (s+e)/2;
            if(a[m] == key){
                ansUp = m;
                s = m + 1;
            }

            else if(a[m] > key){
                e = m - 1;
            }

            else{
                s = m + 1;
            }
        }

        cout<<ansLow<<" "<<ansUp<<'\n';
    }
    return 0;
}