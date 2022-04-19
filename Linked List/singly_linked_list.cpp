#include<bits/stdc++.h>
using namespace std;

class node{
public:
  int data;
  node *next;

  node(int d){
    this->data = d;
    this->next=NULL;
  }
};


void insertAtBeg(node *&START,int d){
  node *newNode = new node(d);

  if(START==NULL) START=newNode;
  else {
    newNode->next=START;
    START=newNode;
  }
}


void insertAtEnd(node *&START, int d){
  node *newNode = new node(d);
  if(START==NULL) START=newNode;
  else{
    node *ptr=START;
    while(ptr->next!=NULL){
      ptr=ptr->next;
    }
    ptr->next=newNode;
  }
}


void insertAtPos(node *&START, int d, int pos){

  if(pos==1) {
    insertAtBeg(START, d);
    return;
  }

  node *ptr=START;
  int i=1;
  node *newNode = new node(d);
  while(i < pos-1){
    ptr=ptr->next;
    i++;
  }
  newNode->next=ptr->next;
  ptr->next=newNode;

}


void delAtBeg(node *&START){
  node *ptr=START;
  START=START->next;
  delete ptr;
}


void delAtEnd(node* &START){
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
  if(pos==1) {
    delAtBeg(START);
    return;
  }
  int i=1;
  node *ptr=START;
  node *preptr;
  while(i<pos){
    preptr=ptr;
    ptr=ptr->next;
    i++;
  }
  preptr->next=ptr->next;
  delete ptr;
}


void viewList(node *s){
  node *ptr=s;
  while(ptr != NULL){
    cout<<ptr->data<<' ';
    ptr=ptr->next;
  }
  cout<<'\n';
}


int main()
{
  node *START=NULL;
  node *newNode = new node(10);
  node *newNode2 = new node(12);
  node *newNode3 = new node(13);
  newNode->next=newNode2;
  newNode2->next=newNode3;
  START = newNode;

  // cout<<newNode->data<<'\n';
  // cout<<newNode->next;
  viewList(START);

  //INSERTION
  insertAtBeg(START, 5);
  insertAtEnd(START, 30);
  viewList(START);
  insertAtPos(START, 11, 3);

  viewList(START);

  // DELETION
  delAtBeg(START);
  viewList(START);

  delAtEnd(START);
  viewList(START);

  delAtPos(START,3);
  viewList(START);

  return 0;
}
