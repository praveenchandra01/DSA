#include<iostream>
using namespace std;
int main()
{
  	int i=1,n=0;
		cin>>n;
		while(i<=n){
			int j=1;
			while(j<=i){
				char ch = 'A'+i-1;
				cout<<ch<<' ';
				j++;
			}
			cout<<'\n';
			i++;
		}
  return 0;
}

// 4
// A
// B B
// C C C
// D D D D
