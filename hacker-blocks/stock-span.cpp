#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int *a = new int[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];   
    }
    
    stack<int> s;
    int *span = new int[n];
    for(int i=0;i<n;i++){
        while(!s.empty() && a[s.top()] < a[i]){
            s.pop();
        }

        int req = s.empty() ? -1 : s.top();
        span[i] = i - req;
        s.push(i);
    }

    for(int i=0;i<n;i++){
        cout<<span[i]<<" ";
    }

    cout << "END\n";
    return 0;
}