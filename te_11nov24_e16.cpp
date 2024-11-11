// Program to add series of numbers upto 20.

#include <iostream>
using namespace std;

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
  int result = sum(20);
  cout << result;
  return 0;
}