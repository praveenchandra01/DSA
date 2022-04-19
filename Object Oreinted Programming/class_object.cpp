#include<bits/stdc++.h>
using namespace std;

class Hero {
private:
  int health;
public:
  char level;
  //getter
  int getHealth(){
    return health;
  }
  //setter
  void setHealth(int h){
    health=h;
  }
};

int main()
{
  Hero h1;  //object intialisation
  cout<<h1.getHealth()<<'\n';  //garbage value
  h1.setHealth(70);
  cout<<h1.getHealth();

  // h1.health=69; //initialise var when public
  // h1.level='X';
  // cout<<h1.health<<'\n'<<h1.level;
  cout<<'\n'<<sizeof(h1);  //returns byte instead of 5 beacuse of compiler padding and greedy alginment

  return 0;
}
