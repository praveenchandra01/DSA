#include<iostream>
using namespace std;
int main()
{
	int i=1,n=0;
	cin>>n;
	while(i<=n){
		int spaces = n-i;
		while(spaces){
			cout<<' ';
			spaces--;
		}
		int j=1;
		while(j<=i){
			cout<<j;
			j++;
		}
		int k = i-1;
		while(k){
			cout<<k;
			k--;
		}
		cout<<'\n';
		i++;
	}
  return 0;
}

// 4
//    1
//   121
//  12321
// 1234321
