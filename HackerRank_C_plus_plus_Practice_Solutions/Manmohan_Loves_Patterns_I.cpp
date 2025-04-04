#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int main()
{
  ll n;
  cin >> n;
  for (ll i = 1; i <= n; i++)
  {
    for (ll j = 1; j <= i; j++)
    {
      if (i % 2 != 0)
      {
        cout << 1;
      }

      else
      {

        if (j == 1 or j == i)
        {
          cout << 1;
        }
        else
        {
          cout << 0;
        }
      }
    }

    cout << endl;
  }

  return 0;
}
