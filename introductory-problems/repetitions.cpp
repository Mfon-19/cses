#include <ios>
#include <iostream>
using namespace std;

int main()  {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;

  int longest = 1, curlen = 1;
  for (unsigned long i = 1; i < s.length(); i++) {
    if (s[i] == s[i - 1]) {
      curlen++;
    } else {
      longest = max(longest, curlen);
      curlen = 1;
    }
  }
  cout << max(longest, curlen);
}