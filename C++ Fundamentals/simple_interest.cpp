#include <bits/stdc++.h>
using namespace std;

int main()
{
  float principal;
  float rate_of_interest;
  float time;

  cin >> principal >> rate_of_interest >> time;

  double simple_interest;
  simple_interest = (principal*rate_of_interest*time)/100;

  cout << "Simple Interest : " << simple_interest;

  return 0;
}
