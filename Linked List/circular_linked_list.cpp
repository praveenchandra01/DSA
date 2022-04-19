#include<bits/stdc++.h>
using namespace std;

class node{
public:
  int data;
  node *next;

  node(int d){
    this->data=d;
    this->next=NULL;
  }
};

void insertNode(node *&START, int data, int val){
  node *newNode = new node(data);
  if(START==NULL){
    START = newNode;
    newNode->next=newNode;
  }
  else{
    node *ptr = START;
    while(ptr->data != val){
      ptr=ptr->next;
    }
    newNode->next=ptr->next;
    ptr->next=newNode;
  }
}

void deleteNode(node *&START, int val){

  if(val==START->data){
  node *ptr=START;
  START=START->next;
  node *ptr2 = START;
  while(ptr2->next!=ptr){
    ptr2=ptr2->next;
  }
  ptr2->next=START;
  delete ptr;
  return;
  }

  node *ptr = START;
  node *preptr=NULL;
  while(ptr->data!=val){
    preptr=ptr;
    ptr=ptr->next;
  }
  preptr->next=ptr->next;
  delete ptr;
}

void viewList(node *&START){
  node *ptr=START;
  do{
    cout<<ptr->data<<' ';
    ptr=ptr->next;
  }
  while(ptr!=START);
  cout<<'\n';
}

int main()
{
  node *START=NULL;
  node *newNode = new node(10);
  node *newNode2 = new node(20);
  node *newNode3 = new node(30);

  newNode->next=newNode2;
  newNode2->next=newNode3;
  newNode3->next=newNode;

  START=newNode;
  viewList(START);

  insertNode(START,15,10);
  viewList(START);

  deleteNode(START,30);
  viewList(START);
  return 0;
}
