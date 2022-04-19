//LEETCODE

#include<iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	int r=0,a=0;
		while(x!=0){
			r=x%10;
			if((a>INT_MAX/10)||(a<INT_MIN/10)){
					cout<<"0";
					break;
				}
			a=(a*10)+r;
			x=x/10;
	}
		cout<<a;
  return 0;
}
