#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n=0,ans=0,i=0,digit;
	cin>>n;
	while(n!=0){
		digit = n%10;
		if(digit==1)
		ans = ans + pow(2,i);
		n=n/10;
		i++;
	}
	cout<<ans;
  return 0;
}
