#include<bits/stdc++.h>
using namespace std;
int partition(int*, int , int );

int partition(int *arr, int s, int e){
  int pivot=arr[s];
  int count =0;
	for(int i=s+1;i<=e;i++){
	if(arr[i]<=pivot) count++;
	}
	int k = count+s;
	swap(arr[k],arr[s]);
  int i=s;
  int j=e;
  while(i < k && j > k){
    while(arr[i] <= pivot) i++; //jab tak greater than pivot elem nahi mil jata
    while(arr[j] > pivot) j--;  //jab tak less than or equal to pivot elem nahi mil jata
    if(i<k && j>k) swap(arr[i],arr[j]);
  }
  return k;
}

void quick_sort(int *arr, int s, int e){
  if(s>=e) return;

  int p = partition(arr,s,e);
  quick_sort(arr,s,p-1);
  quick_sort(arr,p+1,e);
}

int main()
{
  int arr[]={3,5,2,13,12,3,2,13,45};
  int n=sizeof(arr)/sizeof(arr[0]);
  quick_sort(arr,0,n-1);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<' ';
  }
  return 0;
}


// int partition(int *arr, int s, int e){
//   int pivot=arr[s];
//   int i=s+1;
//   int j=e;
//   while(i < j){
//     while(arr[i] <= pivot) i++; //jab tak greater than pivot elem nahi mil jata
//     while(arr[j] > pivot) j--;  //jab tak less than or equal to pivot elem nahi mil jata
//     if(i<j) swap(arr[i],arr[j]);
//   }
//   swap(arr[j],arr[s]);
//   return j;
// }
