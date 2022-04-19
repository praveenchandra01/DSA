#include<iostream>
using namespace std;
int main()
{
	int i=1,n=0;
	cin>>n;
	// left numbers
	while(i<=n){
		int j=1;
		while(j<=(n-i+1)){
			cout<<j;
			j++;
		}
		// stars
		if(i%2==0){
		int k=((2*i)-2);
		while(k){
			cout<<'*';
			k--;
			}
		}
		else{
			int k=((2*i)-2);
			 while(k){
				 cout<<'*';
				 k--;
				 }
		}
		//right numbers
		int l=n-i+1;
		while(l>=1){
			cout<<l;
			l--;
		}
		cout<<'\n';
		i++;
	}
  return 0;
}

// 5
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
