#include<bits/stdc++.h>
using namespace std;

class Hero{
private:
  int health;
public:
  Hero(){   //simple default constructor
    cout<<"Inside Constructor";
  }
  Hero(int health){    //paramatrized constructor
    // cout<<"this add : "<<this;
    this->health = health;
  }
  Hero(int health, char level){
    this->health = health;
    this->level = level;
  }
  char level;
  int getHealth(){
    return health;
  }
  void setHealth(int h){
    health=h;
  }
};

int main()
{
  Hero obj(69);
  Hero obj2(70,'X');
  // Hero *d = new Hero(11);
  // cout<<"\nobj add : " <<&obj;
  cout<<'\n'<<obj.getHealth();
  cout<<'\n'<<obj2.getHealth()<<'\n'<<obj2.level;

  return 0;
}
