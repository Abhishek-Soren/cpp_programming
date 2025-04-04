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
  float n, p;
  cin >> n >> p;

  float root = 0;
  float inc = 1.0;

  for (int i = 0; i <= p; i++)
  {

    while (root * root <= n)
    {
      root += inc;
    }
    root -= inc;
    inc /= 10;
  }

  cout << root;

  return 0;
}
