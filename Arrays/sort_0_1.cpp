#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  	int arr[]={1,1,0,0,0,0,1,0};
		int l=0,n=8;
	  	int r=n-1;
		while(l<r){
			while(arr[l]==0 && l<r){
				l++;
			}
			while(arr[r]==1 && l<r){
				r--;
			}
      if(l<r){
        swap(arr[l],arr[r]);
        l++;r--;
      }
		}
    for(int i=0;i<n;i++){
      cout<<arr[i]<<' ';
    }
  return 0;
}
