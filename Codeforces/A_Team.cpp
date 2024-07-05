#include <bits/stdc++.h>
using namespace std;

int main()
{
  int no_of_ques, ans, count, no_of_ques_solved = 0;

  cin >> no_of_ques;

  if (no_of_ques >= 1 and no_of_ques <= 1000)
  {
    for (int i = 1; i <= no_of_ques; i++)
    {
      count = 0;
      for (int j = 0; j < 3; j++)
      {
        cin >> ans;

        if (ans == 1)
        {
          count++;
        }
      }
      if (count > 1)
      {
        no_of_ques_solved++;
      }
    }
  }

  cout << no_of_ques_solved;

  return 0;
}