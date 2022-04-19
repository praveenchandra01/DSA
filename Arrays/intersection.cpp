#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[]={1,4,3,3};
  int b[]={3,4,5,6};
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(a[i]==b[j]){
				cout<<a[i]<<' ';
				b[j]=INT_MIN;
				break;
			}
		}
	}
  return 0;
}
