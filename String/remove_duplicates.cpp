#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s="geeksforgeeks";
  int l=s.size();

  string res;
  int arr[26]={0};

  for(int i=0;i<l;i++){

    int ch = s[i]-'a';

    if(arr[ch]==0){
      arr[ch]=1;
      res+=s[i];
    }
  }
  cout<<res;
  return 0;
}
