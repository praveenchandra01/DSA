#include<bits/stdc++.h>
using namespace std;

class Hero{
private:
  char level;
public:
  int health;
  char getLevel(){ return level; }
  void setLevel(char ch){ level=ch; }
};

int main()
{
  // Hero obj;          //static creation
  Hero *d = new Hero;   //dynamic creation
  d->setLevel('A');
  cout<<(*d).getLevel();
  return 0;
}
