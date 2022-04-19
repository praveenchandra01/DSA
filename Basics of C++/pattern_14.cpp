#include<iostream>
using namespace std;
int main()
{
  	int i=1,n=0;
		cin>>n;
		while(i<=n){
			int j=1;
			// char ch = 'A'+i-1;
			while(j<=n){
				char ch = 'A'+i+j-2;
				cout<<ch<<' ';
				// ch++;
				j++;
			}
			cout<<'\n';
			i++;
		}
  return 0;
}

// 3
// A B C
// B C D
// C D E
