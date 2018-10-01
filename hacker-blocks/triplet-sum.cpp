#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int *a  = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a, a + n);

    //Algo
    int target;
    cin>>target;

    int p1, p2;
    int x;
    for(int i=0;i<n;i++){
        x = a[i];
        p1 = i + 1;
        p2 = n - 1;

        while(p1 < p2){
            if(a[p1] + a[p2] == target - x){
                cout<<x<<", "<<a[p1]<<" and "<<a[p2]<<'\n';
                p1++;
                p2--;
            }

            else if(a[p1] + a[p2] > target - x){
                p2--;
            }

            else{
                p1++;
            }
        }
    }
    return 0;
}