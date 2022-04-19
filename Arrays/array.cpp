#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void manipulateArr(int arr[], int size){
  arr[1]=20;
}

int main()
{
  	int array[5] = { 1,2,3,4,5};
    manipulateArr(array, 5);
    for(int i=0;i<5;i++){
      printf("%d ",array[i]);
    }
    cout<<'\n'<<min({1,2,-3,4,5});
  return 0;
}
