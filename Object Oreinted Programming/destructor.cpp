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

  Account *p = new Account(5000,1.2);
  cout<<"Dynamic obj 2: "<<p->amount<<' '<<p->intrest<<'\n';

  Account obj3((*p));
  cout<<"obj 3: "<<obj3.amount<<' '<<obj3.intrest;

  delete p;
  return 0;
}
