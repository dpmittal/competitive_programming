#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *a = new int[n];
    int *b = new int[n];
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        q.push(a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    //Algo
    int time=0;
    int i=0;
    while(!q.empty()){
        if(q.front() == b[i]){
            time++;
            i++;
            q.pop();
        }

        else{
            q.push(q.front());
            q.pop();
            time++;
        }
    }

    cout<<time<<"\n";
    return 0;
}