#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int itr;
    cin>>itr;
    while(itr--)
    {
        ll n;
        cin>>n;
        vector<string> v;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
 
        bool flag =true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]=='1')
                {
                    if((i+1!=n&&j+1!=n)&&(v[i+1][j]=='0'&&v[i][j+1]=='0'))
                        flag=false;
                }
            }
         
        }
        if(!flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}