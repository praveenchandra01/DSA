#include<bits/stdc++.h>
using namespace std;

void remove_duplicate(){
  
}

void bf_remove_duplicate(int *arr, int n){
  vector<int> v;
  for(int i=0;i<n;i++){
    if(find(v.begin(),v.end(),arr[i])==v.end())
    v.push_back(arr[i]);
  }
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<' ';
  }
}

int main()
{

  int arr[]={1,2,3,2,4,3,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  bf_remove_duplicate(arr,n);
  return 0;
}
