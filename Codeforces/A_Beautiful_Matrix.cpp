#include <bits/stdc++.h>
using namespace std;

int main()
{
  int num;

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> num;
      if (num == 1)
      {
        cout << (abs(i - 2)) + (abs(j - 2));
        exit(0);
      }
    }
  }

  return 0;
}