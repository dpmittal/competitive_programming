#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int n;
        cin>>n;
        int arr[n][n] = {0};
        int ele = 1; 
        int r = 0, c = 0;
        int m = n, z=n;
        while (r < m && c < n) 
        { 
            for (int i = c; i < n; i++){
                arr[r][i] = ele;
                ele+=1; 
            }    
            r++;
            for (int i = r; i < m; i++){
                arr[i][n-1] = ele;
                ele+=1; 
            }
            n--; 
            if (r < m) 
            { 
                for (int i = n-1; i >= c; i--){
                    arr[m-1][i] = ele;
                    ele+=1; 
                }
                m--;
            }
            if (c < n) 
            { 
                for (int i = m-1; i >= r; i--){
                    arr[i][c] = ele;
                    ele+=1; 
                }
                c++; 
            } 
        }

        for(int i=0;i<z;i++){
            for(int j=0;j<z;j++)
                cout<<arr[i][j]<<" ";
            cout<<endl;
        } 
    }
    return 0;
}