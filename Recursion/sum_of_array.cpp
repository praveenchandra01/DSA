#include<bits/stdc++.h>
using namespace std;

int get_sum(int *p , int n){
  if(n==1) return p[0];
  return p[0] + get_sum(p+1,n-1);
}

int main()
{
  int arr[]={3,2,5,1,6};
  int n = sizeof(arr)/sizeof(arr[0]);

  int sum = get_sum(arr,n);
  cout<<sum;
  return 0;
}

//17
