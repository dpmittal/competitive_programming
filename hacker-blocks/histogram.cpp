#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //Algo
    stack<int> s;
    ll maxArea = 0;
    int i=0;
    while(i<n){
        if(s.empty() || a[i] >= a[s.top()]){
            s.push(i);
            i++;
        }

        else{
            int curr = s.top();
            s.pop();
            ll areaCurr;
            if(s.empty()){
                areaCurr = a[curr]*i;
            }
            else{
                areaCurr = a[curr]*(i-s.top()-1);
            }
            maxArea = max(maxArea, areaCurr);
        }
    }

    while(!s.empty()){
        int curr = s.top();
        s.pop();
        ll areaCurr;
        if(s.empty()){
            areaCurr = a[curr]*i;
        }
        else{
            areaCurr = a[curr]*(i-s.top()-1);
        }
        maxArea = max(maxArea, areaCurr);
    }

    cout<<maxArea<<"\n";
    return 0;
}