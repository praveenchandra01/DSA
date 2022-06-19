#include <bits/stdc++.h>
using namespace std;


int main()
{
  string s;
    getline(cin,s);

    stringstream ss(s);
    vector<string> tokens;
    string token="";
    while(ss>>token){
      tokens.push_back(token);
      ss.ignore(1,' ');
    }
    for(auto token : tokens){
      cout<<token<<' ';
    }
    return 0;
}
