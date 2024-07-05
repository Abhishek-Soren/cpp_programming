#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  int n, x = 0;

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> str;
    if (str == "X++" || str == "++X")
      x++;
    if (str == "X--" || str == "--X")
      x--;
  }

  cout << x;

  return 0;
}