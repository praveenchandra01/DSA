//LEETCODE

#include<iostream>
using namespace std;
int main()
{
  int n;
	cin>>n;
	int ans=1;
	int i;
		for( i=0; i<31;i++ ){
			// ans=pow(2,i);
			if(ans == n){
					cout<<"True";
					break;
				}
				if(ans < INT_MAX/2)
				ans = ans * 2;
	}
	if(i==31) cout<<"False";
  return 0;
}

// 5
// False
