#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // vector<int> v;
    // while(cin>>n){
    //   v.push_back(n);
    // }


    int k;
    vector<int> v;
    string s="";
    getline(cin,s);
    for(auto i : s ){
      if(i!=' '){
        int val = i-'0';
        v.push_back(val);
      }
    }
    cin>>k;

    for(int i : v)  cout<<i<<' ';
    cout<<'\n'<<k;
    return 0;
}

// 1 2 3 4 5 6
// 4
