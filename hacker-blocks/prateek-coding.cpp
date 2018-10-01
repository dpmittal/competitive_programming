#include<bits/stdc++.h>
using namespace std;

int main(){

    int q;
    cin>>q;
    stack<int> s;

    while(q--){
        int qType;
        cin>>qType;
        switch(qType){
            case 1: if(s.empty()){
                        cout<<"No Code\n";
                    }

                    else{
                        cout<<s.top()<<'\n';
                        s.pop();
                    }
                break;
            
            case 2: int price;
                    cin>>price;
                    s.push(price);
                break;
        }
    }
    return 0;
}