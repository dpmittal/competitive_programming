#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    deque<int> q(k);
    for(int i=0;i<k;i++){
        while(!q.empty() and a[i] > a[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
    }

    for(int i=k;i<n;i++){
        cout<<a[q.front()]<<" ";
        //Contraction
        while(!q.empty() and q.front() <= i - k){
            q.pop_front();
        }

        while(!q.empty() and a[i] > a[q.back()]){
            q.pop_back();
        }
        //Expansion
        q.push_back(i);
    }
    cout<<a[q.front()];
    cout<<"\n";
    return 0;
}