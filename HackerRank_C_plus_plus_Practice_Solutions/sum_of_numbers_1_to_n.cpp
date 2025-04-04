#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  long sum = 0;
  cin >> n;
  for (int i = 1; i <= n; ++i)
  {
  	sum += i;
  }
  cout << "Sum of Numbers from 1 to " << n << " is : " << sum;
  return 0;
}
