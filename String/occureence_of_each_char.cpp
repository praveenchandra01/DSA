#include<bits/stdc++.h>
using namespace std;

// brute_force
void bf_frequency(char *arr, int n){
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
void hash_frequency(char *arr, int n){
  int freq[26]={0};
  for(int i=0;i<n;i++){
    int ch = arr[i]-'a';
    freq[ch]++;
  }
  for(int i=0;i<26;i++){
    char charc = i+'a';
    if(freq[i]!=0) cout<<charc<<" : "<<freq[i]<<'\n';
  }
}

int main()
{
  char arr[100]="this alphabets";
  int n = strlen(arr);
  bf_frequency(arr,n);
  cout<<"*******\n";
  hash_frequency(arr,n);
  return 0;
}

//
// 0 : 14
// 1 : 11
