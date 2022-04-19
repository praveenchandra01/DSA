#include<bits/stdc++.h>
using namespace std;

string manipulate(string s){
  s[1]='m';
  cout<<s.length();
  return s;
}

int main()
{
  string s="praveen kumar";
  string d=manipulate(s);
  cout<<d;

  return 0;
}
// char array
// void manipulate(char *s){ //(char s[])
//   s[1]='m';
// }
//
// int main()
// {
//   char s[20]="praveen";
//   manipulate(s);
//   cout<<s;
//   return 0;
// }
