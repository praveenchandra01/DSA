#include<bits/stdc++.h>
using namespace std;

bool isValid(int arr[],int n, int mid, int k){
  int sum=0;
  for(int i=0;i<n;i++){
    if(arr[i]>mid) sum+=(arr[i]-mid);
  }
  if(sum>=k) return true;
  else return false;
}

int main()
{
  int arr[]={4, 42, 40, 26, 46};
  int n=5;
  int k=20;
  int start =0,ans=-1;
  int end = *max_element(arr,arr+n);
  while(start<=end){
    int mid=(start+end)/2;
    if(isValid(arr, n, mid, k)){
      ans=mid;
      start = mid+1;
    }
    else end = mid-1;
  }
  cout<<ans;
  return 0;
}
