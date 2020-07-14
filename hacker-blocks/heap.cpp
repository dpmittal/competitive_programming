#include <bits/stdc++.h>
using namespace std;

class Heap
{
    vector<int> v;
    bool minType;

    //Compare according to min or max heap
    bool typeCompare(int parent, int child)
    {
        if (minType)
        {
            return parent > child;
        }
        return child > parent;
    }

    //Heapify
    void heapify(int index) {
        int left = 2*index;
        int right = left + 1;

        int minIndex = index;
        if(left<v.size() and typeCompare(v[index], v[left])){
            minIndex = left;
        }
        if(right<v.size() and typeCompare(v[minIndex], v[right])){
            minIndex = right;
        }

        if(minIndex != index){
            swap(v[index], v[minIndex]);
            heapify(minIndex);
        }

        return;
    }

  public:
    Heap(bool minHeap = true)
    {
        minType = minHeap;
        v.reserve(100);
        v.push_back(-1);
    }

    //Check for empty
    bool isEmpty(){
        return v.size() == 1;
    }

    //Insert
    void push(int data)
    {
        v.push_back(data);
        int index = v.size() - 1;

        int parent = index / 2;
        while (index > 1 && typeCompare(v[parent], v[index]))
        {
            swap(v[parent], v[index]);
            index = parent;
            parent = parent / 2;
        }
    }

    //Get Top Element
    int getTop()
    {
        return v[1];
    }

    //Deletion only from top
    void pop()
    {
        //Swap first and last
        swap(v[1], v[v.size()-1]);
        //Pop last
        v.pop_back();
        //Heapify
        heapify(1);
    }
};

int main()
{   
    int a[] = {7,8,9,1,2,3,4};
    Heap h;
    int n = sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++){
        h.push(a[i]);
    }

    while(not h.isEmpty()){
        cout<<h.getTop()<<" ";
        h.pop();
    }
    return 0;
}