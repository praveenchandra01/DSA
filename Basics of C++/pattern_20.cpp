#include<iostream>
using namespace std;
int main()
{
  int i=1,n=0;
	cin>>n;
	while(i<=n){
		int j=1;
		while(j<=n-i+1){
			cout<<"*";
			j++;
		}
		cout<<'\n';
		i++;
	}
  return 0;
}

// 4
// ****
// ***
// **
// *
