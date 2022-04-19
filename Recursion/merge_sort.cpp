#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int s,int m, int e){

  int len1 = m-s+1;
  int len2 = e-m;

  int *first = new int[len1];
  int *second = new int[len2];

  int k=s;
  for(int i=0;i<len1;i++){
    first[i]=arr[k++];
  }
  k=m+1;
  for(int i=0;i<len2;i++){
    second[i]=arr[k++];
  }

  int i=0,j=0;
  k=s;

  while(i<len1 && j<len2){
    if(first[i]<second[j])
      arr[k++]=first[i++];
    else arr[k++]=second[j++];
  }
  while(i<len1){
    arr[k++]=first[i++];
  }
  while(j<len2){
    arr[k++]=second[j++];
  }
  delete []first;
  delete []second;
}

void merge_sort(int *arr, int s, int e){
  if(s>=e) return;
  int mid=s+(e-s)/2;

  merge_sort(arr,s,mid);
  merge_sort(arr,mid+1,e);
  merge(arr,s,mid,e);

}

int main()
{
  int arr[]={3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
  int n = sizeof(arr) / sizeof(arr[0]);
  merge_sort(arr,0,n-1);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<' ';
  }
  return 0;
}
