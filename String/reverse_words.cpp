#include<bits/stdc++.h>
using namespace std;

string reverse(string &s){
  int st=0;
  int e=s.size()-1;
  while(st<e){
    swap(s[st++],s[e--]);
  }
  return s;
}

int main()
{
  string s = "my name is aman";
  vector<string> str;
  string temp;
  int i=0;
  while(i<s.size()){
    if(s[i]!=' ') temp.push_back(s[i]);
    else{
      temp = reverse(temp);
      str.push_back(temp);
      temp.clear();
    }
    i++;
  }
  reverse(temp);
  str.push_back(temp);
  for(auto i : str){
    cout<<i<<' ';
  }
  return 0;
}
