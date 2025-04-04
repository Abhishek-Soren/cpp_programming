#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int num, result = 0, power = 0;
    cin >> num;

    for (int j = num; j > 0; j = j/10) {
      int remainder = j%10;
      result = result + remainder * pow(2, power);
      power++;

    }

    cout << result << endl;
  }

  return 0;
}
