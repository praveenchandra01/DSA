#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[3][3];

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin>>a[i][j];
    }
  }

  for(int i=0;i<3;i++){
    int sum=0;
    for(int j=0;j<3;j++){
      // cout<<a[j][i]<<' ';
      sum+=a[j][i];
    }
    cout<<sum<<' ';
  }


  return 0;
}
