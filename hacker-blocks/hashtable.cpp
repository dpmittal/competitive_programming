#include<iostream>
#include "hashtable.h"

int main(){
    
    Hashtable<int> h;
    h.insert("Mango", 120);
    h.insert("Apple", 180);
    h.insert("Guava", 100);
    h.insert("Pineapple", 90);
    h.insert("Litchi", 80);

    cout<<h["Banana"]<<'\n';
    h.print();
    return 0;
}