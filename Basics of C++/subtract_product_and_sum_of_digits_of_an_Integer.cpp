//LEETCODE

#include <iostream>
using namespace std;
int main() {
  int n = 0;
  cin >> n;
  int product = 1;
  int sum = 0;
  int r, diff = 0;
  while (n) {
    r = n % 10;
    product *= r;
    sum += r;
    n /= 10;
  }
  diff = product - sum;
  cout << diff;
  return 0;
}

// 234
// 15
