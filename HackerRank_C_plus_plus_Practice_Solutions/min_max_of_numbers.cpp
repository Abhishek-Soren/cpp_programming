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
  int n, num;
  cin >> n;

  int min = INT_MAX, max = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    cin >> num;
    if (num < min)
    {
      min = num;
    }
    if (num > max)
    {
      max = num;
    }
  }
  cout << "Minimum Value : " << min << endl;
  cout << "Maximum Value : " << max << endl;
  return 0;
}
