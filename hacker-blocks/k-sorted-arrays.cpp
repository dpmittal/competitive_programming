#include<bits/stdc++.h>
#define INF 1e16
using namespace std;
typedef long long int ll;

class obj{
    public:
        ll data;
        int array;

        obj(){
            data=-1;
            array=-1;
        }

        obj(ll a, int i){
            data=a;
            array=i;
        }
};

class myCompare{
    public:
        bool operator()(obj &parent, obj &child){
            return parent.data > child.data;
        }
};

int main(){

    int k,n;
    cin>>k>>n;

    obj v[k][n];
    ll a;

    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            cin>>a;
            obj x(a, i);
            v[i][j]=x;
        }
    }

    priority_queue<obj, vector<obj>, myCompare> h;
    
    //1. Push first element of each array into the min heap
    for(int i=0;i<k;i++)
        h.push(v[i][0]);

    vector<int> index (k, 0);
    
    while(h.top().data != INF){
        //take top element and show
        int current = h.top().data;
        int last = h.top().array;
        cout<<current<<" ";
        index[last]++;

        //Pop top element
        h.pop();
        
        //If no more numbers in array- insert infinity
        if(index[last] >= n){
            obj n(INF, -1);
            h.push(n);
        }

        //If numbers present then push the next element of array which popped element belonged to
        else{
            h.push(v[last][index[last]]);
        }
    }
    cout<<'\n';
    return 0;
}