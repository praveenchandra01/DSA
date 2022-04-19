#include<iostream>
using namespace std;
int main()
{
  int amt=0;
	cin>>amt;
	int Rs_100,Rs_50,Rs_20,Rs_1;
	switch (1) {
		case 1: Rs_100 = amt/100;
		 				amt = amt%100;
						cout<<Rs_100<<'\n';
		case 2: Rs_50 = amt/50;
						amt = amt%50;
						cout<<Rs_50<<'\n';
		case 3: Rs_20 = amt/20;
						amt = amt%20;
						cout<<Rs_201<<'\n';
		case 4: Rs_1 = amt/1;
						amt = amt%1;
						cout<<Rs_1<<'\n';
	}
  return 0;
}

// 1330
// 13
// 0
// 1
// 10
