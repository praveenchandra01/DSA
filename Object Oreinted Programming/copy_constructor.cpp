#include<bits/stdc++.h>
using namespace std;

class Account{
public:
  int amount;
  float intrest;

  Account(int a, float i){
    this->amount=a;
    this->intrest=i;
  }
  Account(Account &temp){
    this->amount=temp.amount;
    this->intrest=temp.intrest;
  }
  ~Account(){
    cout<<"\nInside Destructor";
  }
};

int main()
{
  Account obj1(1000,5.2);
  cout<<"obj 1: "<<obj1.amount<<' '<<obj1.intrest<<'\n';
  Account obj2(obj1);
  cout<<"obj 2: "<<obj2.amount<<' '<<obj2.intrest<<'\n';
  return 0;
}
