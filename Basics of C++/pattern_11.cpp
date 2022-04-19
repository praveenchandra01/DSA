#include<iostream>
using namespace std;
int main()
{
  	int i=1,n=0;
		cin>>n;
		while(i<=n){
			int j=1;
			while(j<=n){
				char ch = 'A'+i-1;
				cout<<ch<<' ';
				j++;
			}
			cout<<'\n';
			i++;
		}
  return 0;
}

// 5
// A A A A A
// B B B B B
// C C C C C
// D D D D D
// E E E E E
