#include<iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int *a = new int[n];
    int res = 0;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        res = (res ^ a[i]);
    }
    
    int rescpy = res;
    int pos = 0;
    
    while(1){
        int last = (res&1);
        if(last == 1){
            break;
        }
        
        else{
            pos++;
            res = res>>1;
        }
    }
    
    int seta = 0;

    for(int i = 0; i < n; i++){
        if((a[i] & (1<<pos)) != 0){
            seta = seta^a[i];
        }
    }
    
    int first = seta;
    int second = first ^ rescpy;
    
    if(first > second){
        swap(first, second);
    }
    cout<<first<<" "<<second<<"\n";
	return 0;
}