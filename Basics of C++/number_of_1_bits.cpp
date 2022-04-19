//LEETCODE

#include<iostream>
using namespace std;
int main()
{
	int n=0;
	int c=0;
	cin>>n;
	while(n!=0){
		if(n&1) c++;
		n=n>>1;
	}
	cout<<c;
  return 0;
}

// 5
// 2
