#include<bits/stdc++.h>
using namespace std;

void sort(int *arr, int n){

  if(n==0 || n==1) return;   //base case

  for(int i=0;i<n-1;i++){  // 1 case solve baki recursion
    if(arr[i]>arr[i+1])
      swap(arr[i],arr[i+1]);
  }
  sort(arr,n-1);  // recursive case
}

int main()
{
  int arr[]={2,5,1,6,9};
  int n = sizeof(arr)/sizeof(arr[0]);
  sort(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<' ';
  }
  return 0;
}
