#include<iostream>
using namespace std;
void swap(int* , int*);

void reverse(int arr[], int n){
	for(int i=0;i<=(n/2);i++){
			swap(&arr[i], &arr[n-i-1]);
	}
}

void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

void printArray(int arr[], int n){
	for(int i=0; i<n; i++ ){
		cout<<arr[i]<<" ";
	}
}

int main()
{
  int arr[]={1,2,3,4,5,6};
	int n=6;
	cout<<"Before : ";
	printArray(arr, n);
	reverse(arr, n);
	cout<<"\nAfter : ";
	printArray(arr, n);
  return 0;
}

// Before : 1 2 3 4 5 6
// After : 6 5 3 4 2 1
