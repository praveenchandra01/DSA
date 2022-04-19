#include<bits/stdc++.h>
using namespace std;

int linear_search(int *p, int n,int k){
  if(n==0) return 0; //array khatam phit bhi nahi mila toh return false
  if(p[0]==k) return 1;
  return linear_search(p+1,n-1,k);
}

int main()
{
  int arr[]={3,5,1,2,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 12;
  int res = linear_search(arr, n, k);
  if(res) cout<<"present";
  else cout<<"not present";
  return 0;
}
