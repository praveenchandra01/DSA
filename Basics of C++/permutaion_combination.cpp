#include<iostream>
using namespace std;

int fact(int n){
	int f=1;
	for(int i=1; i<=n; i++){
		f=f*i;
	}
	return f;
}

int permutation(int n, int r){
	int ans = 0;
	ans = fact(n)/fact(n-r);
	return ans;
}

int combination(int n, int r){
	int ans = 0;
	ans = fact(n)/(fact(r)*fact(n-r));
	return ans;
}

int main()
{
	int n,r;
	cin>>n>>r;
	int p = permutation(n,r);
	int c = combination(n,r);
	cout<<"nPr : "<<p<<"\n";
	cout<<"nCr : "<<c<<"\n";
  return 0;
}

// 8 2
// nPr : 56
// nCr : 28
