#include<bits/stdc++.h>
using namespace std;

char get_max_occurance(string s){
    int arr[26]={0},number=0;

    for(int i=0;i<s.length();i++){
      char ch = s[i];
      if(ch>='A' && ch<='Z') number=ch-'A';
      else number=ch-'a';
      arr[number]++;
    }

    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
      if(maxi < arr[i]){
        ans=i;
        maxi=arr[i];
      }
    }
    return 'a'+ans;
}

int main()

{
  string s="smapletest";
  // getline(cin,s);
  cout<<get_max_occurance(s);
  return 0;
}
