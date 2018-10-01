#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n>>k;
    int *a = new int[n];
    priority_queue<int, vector<int> > h;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (h.size() < k) {
            h.push(a[i]);
        }

        else {
            if(a[i] < h.top()){
                h.pop();
                h.push(a[i]);
            }
        }
    }

    cout<<h.top()<<"\n";

    return 0;
}