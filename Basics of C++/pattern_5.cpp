#include<iostream>
using namespace std;
int main()
{
	int i=1,n=0,c=1;
	cin>>n;
	while (i<=n) {
		int j=1;
		while (j<=n) {
			cout<<c<<' ';
			c++;
			j++;
		}
		cout<<'\n';
		i++;
	}
  return 0;
}

// 3
// 1 2 3
// 4 5 6
// 7 8 9
