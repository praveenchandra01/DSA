#include<bits/stdc++.h>
using namespace std;

class A{
public:
  virtual void fun(){
    cout<<"inside A";
  }
};
class B:public A{
public:
  void fun(){
    cout<<"inside B";
  }
};

int main()
{
  A *p;
  B obj;
  p = &obj;
  p->fun();

  return 0;
}
