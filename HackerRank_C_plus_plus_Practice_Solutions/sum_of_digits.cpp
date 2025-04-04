#include <bits/stdc++.h>
using namespace std;

int main()
{
  int num;
  cin >> num;
  int sum = 0;

  for (int i = num; i > 0; i = i/10) {
  	int remainder = i % 10;
  	sum += remainder;
  }

  cout << "The sum of the digits of " << num << " is : " << sum;
  return 0;
}
