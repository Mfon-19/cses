// Weird Algorithm
#include <iostream>
#include <ios>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  long long n;
  cin >> n;

  while (n != 1 && n > 0) {
    cout << "" << n << " ";
    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = (n * 3) + 1;
    }
  }
  cout << 1;
}