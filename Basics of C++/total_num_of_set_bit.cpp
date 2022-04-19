#include<iostream>
#include<math.h>
using namespace std;

int toBinary(int x){
	int ans=0,lastBit=0,i=0;
	while(x!=0){
		lastBit = (x & 1);
		ans = lastBit * pow(10,i) + ans;
		x=x>>1;
		i++;
	}
	return ans;
}

int calcSetbits(int x){
	int setBit=0,c=0;
	while(x!=0){
		if(x & 1) c++;
		x=x>>1;
	}
	return c;
}

int main()
{
  	int a,b;
		cin>>a>>b;
		cout<<toBinary(a)<<'\n'<<toBinary(b);
		int setBits=0;
		setBits = calcSetbits(a);
		setBits += calcSetbits(b);
		cout<<"\nTotal number of setBits in a and b are : "<<setBits;
  return 0;
}

// 5 6
// 101
// 110
// Total number of setBits in a and b are : 4
