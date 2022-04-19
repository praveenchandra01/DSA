#include<bits/stdc++.h>
using namespace std;

double precision(int n, int precision, int temp_sol){
  double factor = 1;
  double ans = temp_sol;
  for(int i=0;i<precision;i++){
    factor=factor/10;
    for(double j=ans; j*j<n; j=j+factor){
      ans=j;
    }
  }
  return ans;
}

int square_root(int n){
  int start =0, end =n, mid=0,ans=-1;
  while(start<=end){
    mid = start + (end - start)/2;
    int square = mid*mid;
    if(square==mid) return mid;
    if(square <= n){
      ans = mid;
      start = mid + 1;
    }
    else end=mid-1;
  }
  return ans;
}

int main()
{
    int n;
    cin>>n;
    int sqrt = square_root(n);
    double sqrt_precision = precision(n,3,sqrt);
    cout<<sqrt_precision;
  return 0;
}
