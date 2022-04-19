#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int ele){
	for(int i=0;i<n;i++){
		if(arr[i]==ele) return 1;
	}
	return 0;
}

int main()
{
		int arr[] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
		int ele;
		cin>>ele;
		int found = linearSearch(arr,10,ele);
		if(found) cout<<"Present";
		else cout<<"Not present";
  return 0;
}
