#include<bits/stdc++.h>
using namespace std;

bool is_sorted(int *p, int n){
  if(n==0 || n==1)  return true;
  if(p[0]>p[1]) return false;
  return is_sorted(p+1, n-1);
}

int main()
{
  int arr[]={2,4,20,9,11,13};
  int n = sizeof(arr)/sizeof(arr[0]);
  if(is_sorted(arr,n)) cout<<"Array is sorted";
  else cout<<"Not sorted";
  return 0;
}
