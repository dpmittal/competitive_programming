#include<bits/stdc++.h>
using namespace std;
class Node{
public:
  int data;
  Node* next;
  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};

Node* insertatHead(Node* head, Node* n){
  // Node* n = new Node(data);
  if(head==NULL){
    head = n;
  }
  else{
    n->next = head;
    head = n;
  }
  return head;
}

Node* insertatTail(Node* head, int data){
  Node* n = new Node(data);
  if(head==NULL){
    head = n;
  }
  else{
    Node* temp= head;
    while(temp->next!=NULL){
      temp = temp->next;
    }
    temp->next = n;
  }
  return head;
}

void printList(Node * head){
  Node *temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}

Node* kthelement(Node* head, int k){
  Node* fast=head;
  Node* slow=head;
  while(fast!=NULL){
    if(k){
      fast=fast->next;
      k--;
    }
    else{
      fast = fast->next;
      slow = slow->next;
    }
  }
  return slow;
}

Node* mergeSort(Node* a, Node * b){
  Node* c;
  if(a==NULL)
    return b;
  if(b==NULL)
    return a;
  if(a->data<b->data) {
    c = a;
    c->next = mergeSort(a->next, b);
  }
  else{
    c = b;
    c->next = mergeSort(a, b->next);
  }
  return c;
}

Node* kappend(Node* head, int k){
  Node* fast=head;
  Node* slow=head;
  while(fast->next!=NULL){
    if(k)
    {
      fast=fast->next;
      k--;
    }
    else{
      fast=fast->next;
      slow = slow->next;

    }
  }
  Node* temp = slow->next;
  slow->next = NULL;
  fast->next = head;
  head = temp;
  return head;
}

Node* evenodd(Node* head){
  Node* temp = head;
  while(temp!=NULL){
    if((temp->data)%2!=0)
    {
      Node* prev = temp->next;
      temp->next = NULL;
      head = insertatHead(head, temp);
      temp = prev;
    }
    else{
        temp=temp->next;
    }
  }
}

int main(){
    int d, n;
    cin>>n;
    Node *a=NULL;
    while(n--){
        cin>>d;
        a = insertatTail(a, d);
    }
    Node* ans = evenodd(a);
    cout<<ans<<endl;
    printList(ans);
  return 0;
}
