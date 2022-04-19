#include<iostream>
using namespace std;

void power(){
	long long int a,b,p=1;
	cin>>a>>b;
	while(b!=0){
		p=p*a;
		b--;
	}
	cout<<p;
}

int main()
{
	power();
  return 0;
}

// 2 3
// 8
