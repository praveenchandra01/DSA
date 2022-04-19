#include<iostream>
using namespace std;

bool isEven(){
	int n;
	cin>>n;
	if(n%2==0) return 1;
	return 0;
}

int main()
{
  int n = isEven();
	if(n) cout<< "True";
	else cout<<"False";
  return 0;
}
