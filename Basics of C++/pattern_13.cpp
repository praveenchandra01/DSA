#include<iostream>
using namespace std;
int main()
{
  	int i=1,n=0;
		char ch = 'A';
		cin>>n;
		while(i<=n){
			int j=1;
			while(j<=n){
				cout<<ch<<' ';
				ch++;
				j++;
			}
			cout<<'\n';
			i++;
		}
  return 0;
}

// 3
// A B C
// D E F
// G H I
