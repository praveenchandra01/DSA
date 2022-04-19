#include<bits/stdc++.h>
using namespace std;

void rev_str(string &s,int i,int j){
  if(i>j) return;
  swap(s[i++],s[j--]);
  rev_str(s,i,j);
}

int main()
{
  string s="abcde";
  int l=s.length();
  rev_str(s,0,l-1);
  cout<<s;
  return 0;
}
