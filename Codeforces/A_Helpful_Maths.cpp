#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str, str2;
  int arr[100], n = 0;

  cin >> str;

  for (auto x : str)
  {
    if (x != '+')
      arr[n++] = x - '0';
  }

  sort(arr, arr + n);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
    if (i == n - 1)
      break;
    cout << '+';
  }

  return 0;
}