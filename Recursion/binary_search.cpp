#include<bits/stdc++.h>
using namespace std;
void print(int *p,int s,int e){
  for(int i=s;i<=e;i++){
    cout<<p[i]<<' ';
  }
}
bool binary_search(int *arr, int s, int e, int k){
  cout<<"arr : ";
  print(arr,s,e);
  if(s>e) return false;
  int mid = s+(e-s)/2;
  cout<<endl<<"Mid : "<<arr[mid]<<endl;
  if(arr[mid]==k) return true;
  if(arr[mid] < k) return binary_search(arr,mid+1,e,k);
  else return binary_search(arr,s,mid-1,k);
}

int main()
{
  int arr[]={2,4,6,10,14,18};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 18;
  bool res = binary_search(arr,0,n-1,k);
  if(res) cout<<"Present";
  else cout<<"Not present";
  return 0;
}
