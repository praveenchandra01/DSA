#include<iostream>
using namespace std;
int main()
{
	int i=1,n=0;
		cin>>n;
		while(i<=n){
			int j=1;
			while(j<=i){
				char ch = 'A'+i+j-2;
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
// B C
// C D E
// D E F G
