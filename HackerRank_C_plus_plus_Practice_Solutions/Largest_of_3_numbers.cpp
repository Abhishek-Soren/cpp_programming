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
  ld a, b, c;
  cin >> a >> b >> c;
  if (a > b and a > c)
  {
    cout << a;
  }

  else if (b > a and b > c)
  {
    cout << b;
  }
  else
  {
    cout << c;
  }
  return 0;
}
