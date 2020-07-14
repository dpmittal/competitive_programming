#include<bits/stdc++.h>
using namespace std;

int f( int S[], int m, int n )
{
    int i, j, x, y;
 
    int table[n+1][m];
    
    for (i=0; i<m; i++)
        table[0][i] = 1;
  
    for (i = 1; i < n+1; i++)
    {
        for (j = 0; j < m; j++)
        {
            // Count of solutions including S[j]
            x = (i-S[j] >= 0)? table[i - S[j]][j]: 0;
 
            // Count of solutions excluding S[j]
            y = (j >= 1)? table[i][j-1]: 0;
 
            // total count
            table[i][j] = (x + y)%(1000000000 + 7);
        }
    }
    return (table[n][m-1] % (1000000000 + 7));
}

int main(){
    short int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *s = new int[n];
        for(int i = 0; i < n; i++){
            cin>>s[i];
        }
        int N;
        cin>>N;

        cout<<f(s, n, N)<<'\n';
    }
    return 0;
}