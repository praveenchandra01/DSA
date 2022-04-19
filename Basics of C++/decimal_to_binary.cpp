#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  long long int n;
  unsigned long long int  i=0,ans=0;
  cin>>n;
  if(n<0)
    n=pow(2,16)+n; // -ve num representation for 16 bits
    // cout<<n<<'\n';
  while(n!=0){
    int digit = (n&1);
    ans =  (digit * pow(10,i)) + ans;
    n=n>>1; //divide by 2
    i++;
  }
  cout<<ans;
  return 0;
}

// r=(n&1); // 0->even, 1->odd
// 5
// 101

// for negative number
// -6
// 65530
// 1111111111111010
