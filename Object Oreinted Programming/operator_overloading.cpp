#include<bits/stdc++.h>
using namespace std;

class A{
public:
  int a;

  void operator+(A &temp_obj){
    int val_1=this->a;
    int val_2=temp_obj.a;
    cout<<val_2 - val_1;
  }
};

int main()
{
  A obj1, obj2;
  obj1.a=5;
  obj2.a=30;

  obj1 + obj2;
  return 0;
}
