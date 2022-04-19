#include<bits/stdc++.h>
using namespace std;

class node{
public:
  int data;
  node *prev;
  node *next;

  node(int d){
    this->data=d;
    this->prev=NULL;
    this->next=NULL;
  }
};


void insertAtBeg(node *&START, int data){
  node *newNode = new node(data);
  if(START==NULL) START = newNode;
  else{
    newNode->next=START;
    START->prev=newNode;
    START=newNode;
  }
}


void insertAtEnd(node *&START, int d){
  node *newNode = new node(d);
  if(START==NULL) START = newNode;
  else{
    node *ptr = START;
    while(ptr->next!=NULL)
      ptr=ptr->next;
    ptr->next=newNode;
    newNode->prev=ptr;
  }
}


void insertAtPos(node *&START, int data, int pos){
  if(pos==1){
    insertAtBeg(START, data);
    return;
  }
  node *newNode = new node(data);
  node *ptr = START;
  int i=1;
  while(i < pos-1){
      ptr=ptr->next;
      i++;
  }
  newNode->next = ptr->next;
  ptr->next = newNode;
  newNode->prev = ptr;
  newNode->next->prev = newNode;
}


void delAtBeg(node *&START){
  node *ptr=START;
  START=START->next;
  START->prev=NULL;
  delete ptr;
}


void delAtEnd(node *&START){
  node *ptr=START;
  node *preptr;
  while(ptr->next!=NULL){
    preptr=ptr;
    ptr=ptr->next;
  }
  preptr->next=NULL;
  delete ptr;
}


void delAtPos(node *&START, int pos){
  if(pos==1){
    delAtBeg(START);
    return;
  }
  node *ptr=START;
  node *preptr;
  int i=1;
  while(i < pos){
    preptr=ptr;
    ptr=ptr->next;
    i++;
  }
  preptr->next=ptr->next;
  ptr->next->prev = preptr;
  delete ptr;
}


void viewList(node *&START){
  node *ptr=START;
  while(ptr!=NULL){
    cout<<ptr->data<<' ';
    ptr=ptr->next;
  }
  cout<<'\n';
}


void viewListRev(node *&START){
  node *ptr=START;
  while(ptr->next!=NULL){
    ptr=ptr->next;
  }
  while(ptr!=NULL){
    cout<<ptr->data<<' ';
    ptr=ptr->prev;
  }
  cout<<'\n';
}


int main()
{
  node *START=NULL;
  node *newNode = new node(5);
  node *newNode2 = new node(7);
  node *newNode3 = new node(9);

  newNode->next=newNode2;
  newNode2->prev=newNode;

  newNode2->next=newNode3;
  newNode3->prev=newNode2;

  START=newNode;

  viewList(START);
  viewListRev(START);

  //insertion
  insertAtBeg(START,3);
  insertAtEnd(START,11);
  viewList(START);
  insertAtPos(START,6,3);

  viewList(START);

  //deletion
  delAtBeg(START);
  viewList(START);
  // viewListRev(START);

  delAtEnd(START);
  viewList(START);

  delAtPos(START,4);
  viewList(START);
  // viewListRev(START);
  return 0;
}
