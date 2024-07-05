#include <bits/stdc++.h>
using namespace std;

int main()
{
  string a, b;
  cin >> a >> b;
  for (auto &x : a)
  {
    x = tolower(x);
  }

  for (auto &x : b)
  {
    x = tolower(x);
  }

  if (a == b)
    cout << 0;
  else if (a > b || b < a)
    cout << 1;
  else
    cout << -1;

  return 0;
}