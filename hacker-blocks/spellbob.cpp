#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string front;
        string back;
        cin>>front;
        cin>>back;
        
        int bctr=2;
        int octr=1;
        bool flag=false;
        for(int i=0;i<front.length();i++){
            if(front[i] == 'b' and bctr){
                bctr--;
            }
            else if(front[i] == 'o' and octr){
                octr--;
            }
            else{
                if(back[i] == 'b' and bctr){
                    bctr--;
                }
                else if(back[i] == 'o' and octr){
                    octr--;
                }
            }
            if(!bctr and !octr){
                flag=true;
                break;
            }
        }

        if(flag){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }
    return 0;
}