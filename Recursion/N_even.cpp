#include<bits/stdc++.h>
using namespace std;

// even no. under N;
void even_under_N(int i, int n){
  if(i>n) return;
  cout<<i<<' ';
  even_under_N(i+2,n);
}

// total n even no.
void even_total_N(int i, int n){
  if(n==0) return;
  cout<<i<<' ';
  even_total_N(i+2,n-1);
}

int main()
{
  int i;
  even_under_N(i=0,10);
  cout<<endl;
  even_total_N(i=0,10);
  return 0;
}
