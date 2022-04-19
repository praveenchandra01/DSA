#include<bits/stdc++.h>
using namespace std;

void N_num(int n){
  if(n==0) return;
  N_num(n-1);
  cout<<n<<' ';
}
void N_num_rev(int n){
  if(n==0) return;
  cout<<n<<' ';
  N_num(n-1);
}


int main()
{
  int n;
  cin>>n;
  N_num(n);
  cout<<endl;
  N_num_rev(n);
  return 0;
}
