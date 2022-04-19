#include<iostream>
using namespace std;

int getMax(int arr[], int n){
	int maxNum = INT_MIN;
	for(int i=0;i<n;i++){
		// if(arr[i]>maxNum) maxNum=arr[i];
		maxNum = max(arr[i],maxNum);
	}
	return maxNum;
}

int getMin(int arr[], int n){
	int minNum = INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]<minNum) minNum=arr[i];
	}
	return minNum;
}

void getMinMax(int arr[], int n){
	int maxNum=INT_MIN,minNum=INT_MAX;
	if(arr[0]>arr[1]){
		maxNum = arr[0];
		minNum=arr[1];
	}
	else{
		maxNum = arr[1];
		minNum=arr[0];
	}
	for(int i=2;i<n;i++){
		maxNum=max(arr[i],maxNum);
		minNum=min(arr[i],minNum);
	}
	cout<<maxNum<<'\n'<<minNum;
}

int main()
{
  	int n;
		cin>>n;
		int arr[100];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		cout<<"Max "<<getMax(arr,n)<<'\n';
		cout<<"Min "<<getMin(arr,n);
		// getMinMax(arr, n);
  return 0;
}

// 5
// 4 2 -5 3 10
// Max 10
// Min -5
