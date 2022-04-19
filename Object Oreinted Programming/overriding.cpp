#include<bits/stdc++.h>
using namespace std;

class Base{
public:
  void print(){
    cout<<"inside Base";
  }
};

class Derived: public Base{
public:
  void print(){
    cout<<"inside Derived";
  }
};


int main()
{
  Derived obj;
  obj.print();
  return 0;
}

//here function present inside dirived class overrides the base class function
