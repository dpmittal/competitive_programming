#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        int course;
        int roll; 
        Student(int c, int r){
            course=c;
            roll=r;
        }
};  

int main(){

    int q;
    cin>>q;
    int c,r;
    while(q--){
        queue<Student> q;
        stack<Student> s1;
        stack<Student> s2;

        char qType;
        cin>>qType;
        switch(qType){
            case 'E':   cin>>c>>r;
                        Student s(c,r);
                        while(s.course!=s1.top().course && not s1.empty()){
                            s2.push(s1.top());
                            s1.pop();
                        }
                         
                break;
        }
    }
    return 0;   
}