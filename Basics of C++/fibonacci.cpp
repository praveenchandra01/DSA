#include<iostream>
using namespace std;

int fibonacci(int n){
	if(n==1) return 0;
	else if(n==2) return 1;
	else
		{
			int f=0,s=1;
			n=n-2;
			int t=0;
			while(n!=0){
				t=f+s;
				f=s;
				s=t;
				n--;
			}
			return t;
		}
}

int main()
{
  int n;
	cin>>n;
	cout<<"The "<<n<<"th term of fibonacci seires is : "<<fibonacci(n);
  return 0;
}
