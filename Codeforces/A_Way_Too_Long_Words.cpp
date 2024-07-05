#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, size;
  cin >> n;
  string str;

  if (n >= 1 && n <= 100)
  {
    for (int i = 0; i < n; i++)
    {
      cin >> str;
      size = str.length();

      if (size > 10)
      {
        cout << str[0] << size - 2 << str[size - 1] << endl;
      }

      else
      {
        cout << str << endl;
      }
    }
  }
  return 0;
}