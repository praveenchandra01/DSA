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
				cout<<'*';
				j++;
			}
			// int j=1;
			// while(j<=n){
			// 	if(i+j>=(n+1)){
			// 		cout<<'*';
			// 	}
			// 	else{
			// 		cout<<' ';
			// 	}
			// 	j++;
			// }
			cout<<'\n';
			i++;
		}
  return 0;
}

// 4
//    *
//   **
//  ***
// ****
