#include<bits/stdc++.h>
using namespace std;

class UberCar{
    string driver;
    string model;
    int x,y;

    public:
    UberCar(string d, string m, int x, int y){
        driver=d;
        model=m;
        this->x=x;
        this->y=y;
    }

    void print(){
        cout<<driver<<endl;
        cout<<model<<endl;
        cout<<x<<", "<<y<<endl;
    }

    void operator +(UberCar x){
        cout<<driver<<" and "<<x.driver<<" are driving "<<model<<" and "<<x.model<<endl;
    }

    int dist(){
        return x*x + y*y;
    }
};

ostream& operator<<(ostream &os, UberCar &x){
    x.print();
    return os;
}

class MyCompare{
    public:
        bool operator()(UberCar &c, UberCar &d){
            return c.dist() < d.dist();
        }
};

int main(){

    UberCar c("Dhruv", "Wagon R", 10,20);
    UberCar d("Parteek", "Swift", 30,40);
    UberCar e("Koko", "Swift D", 50,60);
    
    priority_queue<UberCar, vector<UberCar>, MyCompare > h;

    h.push(c);
    h.push(d);
    h.push(e);

    while(not h.empty()){
        UberCar t=h.top();
        cout<<t<<"\n";
        h.pop();
    }
    return 0;
}