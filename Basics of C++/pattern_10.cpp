#include<iostream>
using namespace std;
int main()
{
	int i=1,n=0;
	cin>>n;
	while (i<=n){
		int j=1;
		while (j<=i)
		{
				cout<<i-j+1<<' ';
				j++;
		}
		cout<<'\n';
		i++;
}
  return 0;
}

// 4
// 1
// 2 1
// 3 2 1
// 4 3 2 1
