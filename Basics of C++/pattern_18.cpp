#include<iostream>
using namespace std;
int main()
{
	int i=1,n=0;
		cin>>n;
		while(i<=n){
			int j=1;
			char ch = 'A'+n-i;
			while(j<=i){
				cout<<ch<<' ';
				ch++;
				j++;
			}
			cout<<'\n';
			i++;
		}
  return 0;
}

// 4
// D
// C D
// B C D
// A B C D
