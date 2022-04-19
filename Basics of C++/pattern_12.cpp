#include<iostream>
using namespace std;
int main()
{
  	int i=1,n=0;
		cin>>n;
		while(i<=n){
			int j=1;
			while(j<=n){
				char ch = 'A'+j-1;
				cout<<ch<<' ';
				j++;
			}
			cout<<'\n';
			i++;
		}
  return 0;
}

// 5
// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E
