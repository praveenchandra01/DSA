#include<bits/stdc++.h>
using namespace std;

// brute_force
void bf_frequency(int *arr, int n){
  vector<bool> v(n,false);
  for(int i=0;i<n;i++){
    if( v[i] ) continue;
    int count=1;
    for(int j=i+1;j<n;j++){
      if(arr[i]==arr[j]){
        v[j] = true;
        count++;
      }
    }
    cout<<arr[i]<<" : "<<count<<'\n';
  }
}

//array hashing
void hash_frequency(int *arr, int n){
  int max= *max_element(arr,arr+n);
  int freq[max+1]={0};
  for(int i=0;i<n;i++){
    freq[arr[i]]++;
  }
  for(int i=0;i<max+1;i++){
    if(freq[i]!=0) cout<<i<<" : "<<freq[i]<<'\n';
  }
}

int main()
{
  int arr[100]={1,0,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,1,1,0,1,0,0,0};
  int n=25;
  bf_frequency(arr,n);
  cout<<"*******\n";
  hash_frequency(arr,n);
  return 0;
}

//
// 0 : 14
// 1 : 11
