#include<bits/stdc++.h>
using namespace std;

bool check_palindrome(string s, int i, int j){
  if(i>j) return true;
  if(s[i]!=s[j]) return false;
  return check_palindrome(s,++i,--j); //first increment the pass the incremented value
}


int main()
{
  string s="abbccbba";
  int l=s.length();
  int res = check_palindrome(s,0,l-1);
  if(res) cout<<"String is palindrome";
  else cout<<"Not a palindroem";
  return 0;
}
