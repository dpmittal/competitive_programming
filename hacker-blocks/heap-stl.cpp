#include<bits/stdc++.h>
using namespace std;



int main(){

    //By default max heap
    //greater<int> means min heap
    priority_queue<int, vector<int>, greater<int>> q;
    for(int i=1;i<=10;i++){
        q.push(i);
    }

    while(!q.empty()){
        cout<<q.top();
        q.pop();
    }

    return 0;
}