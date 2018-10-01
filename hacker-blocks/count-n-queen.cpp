#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isSafe(int board[][12], int i, int j, int n){
    //for columns
    for(int row=0; row<i; row++){
        if(board[row][j] == 1){
            return false;
        }
    }

    //for left diagonal
    int x = i;
    int y = j;
    while(x>=0 && y>=0){
        if(board[x][y] == 1){
            return false;
        }
        x--;
        y--;
    }

    //for right diagonal
    x = i;
    y = j;
    while(x>=0 && y<0){
        if(board[x][y] == 1){
            return false;
        }
        x--;
        y++;
    }

    return true;
}

bool countNQueen(int board[][12], int i, int n){
    static int ctr = 0;
    //base case
    if(i== n){
        ctr++;
        return true;
    }

    for(int j=0;j<n;j++){
        if(isSafe(board,i,j,n)){
            board[i][j] = 1;

            //If the placed position is correct
            if(countNQueen(board,i+1,n)){
                
            }
            
            //If not then remove queen -- Backtrack step
            board[i][j] = 0;
        }
    }
    return false;
}

int main(){

    int n;
    cin>>n;

    int board[12][12];
    memset(board, 0, sizeof(board));
    cout<<countNQueen(board,0,n)<<'\n';
    return 0;    
}