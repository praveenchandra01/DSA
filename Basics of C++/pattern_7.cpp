#include<iostream>
using namespace std;
int main()
{
		int i=1,n=0;
		cin>>n;
		while(i<=n){
			int j=1;
			while(j<=n){
				if(j<=i) cout<<i<<' ';
				j++;
			}
			cout<<'\n';
			i++;
		}
  return 0;
}

// 4
// 1
// 2 2
// 3 3 3
// 4 4 4 4
