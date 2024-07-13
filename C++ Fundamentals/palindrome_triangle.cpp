#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define pb push_back
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)

int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = n - i; j > 0; j--)
    {
      cout << "    ";
    }

    for (int k = i; k < 2 * i; k++)
    {
      if (k < 10)
        cout << "0";
      cout << k << "  ";
    }

    for (int m = 2 * i - 2; m >= i; m--)
    {
      if (m <10) cout << "0";
      cout << m << "  ";
    }

    cout << endl;
  }

  return 0;
}
