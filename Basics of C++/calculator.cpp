#include<iostream>
using namespace std;
int main()
{
  int a,b;
	char ch;
	cout<<"Enter the the value of a and b\n";
	cin>>a>>b;
	cout<<"Enter the opreation you want to perform : ";
	cin>>ch;
	switch(ch){
		case '+' : cout<<"Answer : "<<a+b;
							break;
		case '-' : cout<<"Answer : "<<a-b;
							break;
		case '*' : cout<<"Answer : "<<a*b;
							break;
		case '/' : cout<<"Answer : "<<a/b;
							break;
		case '%' : cout<<"Answer : "<<a%b;
							break;
		default : cout<<"Please entr the valid operation";
	}
  return 0;
}
