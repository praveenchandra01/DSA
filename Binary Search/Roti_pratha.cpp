#include<bits/stdc++.h>
using namespace std;

bool is_valid(int arr[],int n,int mid,int p){
    int paratha=1;
    int time=arr[0];
    

}



int main()
{
    // #ifndef ONLINE_JUDGE
    //   freopen("input.txt", "r", stdin);
    //   freopen("output.txt", "w", stdout);
    // #endif

    int arr[]={1,2,3,4};
    int n=4;
    int p=10;
    int start = 0;
    int end=1e8;
    while(start<=end){
      int mid=(start+end)/2;
      if(is_valid(arr,n,mid,p)){
        ans=mid;
        end=mid-1;
      }
      else start=mid+1;
    }
    cout<<ans;
  return 0;
}
