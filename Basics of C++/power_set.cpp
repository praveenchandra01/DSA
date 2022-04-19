#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v={1,2,3};
  int l = v.size();
  int p=pow(2,l);
  cout<<"Total no. of subset : "<<p<<'\n';

  for(int i=0;i<p;i++){
    for(int j=0;j<l;j++){
    if(i & (1<<j))  cout<<v[j]<<' ';
  } cout<<'\n';
}

  return 0;
}
