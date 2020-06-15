#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int n;
        string a, b;
        cin>>n>>a>>b;
        int c_a[26] = {0};
        for(int i=0;i<n;i++){
            c_a[a[i]-'a']++;
        }
        bool flag = true;
        if(!flag)
            cout<<-1<<endl;
        else{
            vector<vector<int>> print;
            for(int i=0;i<n;i++){
                if(a[i]!=b[i]){
                    vector<int> temp;
                    if(a[i]<b[i] || c_a[b[i]-'a']==0){
                        flag = false;
                        break;
                    }
                    int j;
                    for(j=0;j<n;j++){
                        if(a[j]==b[i])
                            break;
                    }
                    temp.push_back(2);
                    temp.push_back(min(i, j));
                    temp.push_back(max(i, j));
                    print.push_back(temp);
                }
            }
            if(!flag)
                cout<<-1<<endl;
            else{
                cout<<print.size()<<endl;
                for(int i=0;i<print.size();i++){
                    for(int j=0;j<3;j++){
                        cout<<print[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
        }
    }
    return 0;
}