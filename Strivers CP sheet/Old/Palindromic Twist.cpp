#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string str;
    cin >> str;

    int end = (n / 2) - 1;
    int count = 0;
    for (int i = 0; i <= end; i++)
    {
      char first = str[i];
      char second = str[n - 1 - i];
      if (first == second)
      {
        count++;
      }

      char firstprev;
      char firstnext;
      char secondprev;
      char secondnext;

      if (first == 'a')
      {
        firstprev = '0';
        firstnext = char(first + 1);
      }
      else
      {
        firstprev = char(first - 1);
        firstnext = char(first + 1);
      }

      if (second == 'a')
      {
        secondprev = '0';
        secondnext = char(second + 1);
      }
      else
      {
        secondprev = char(second - 1);
        secondnext = char(second + 1);
      }

      if (first == 'z')
      {
        firstprev = char(first - 1);
        firstnext = '0';
      }
      else
      {
        firstprev = char(first - 1);
        firstnext = char(first + 1);
      }

      if (second == 'z')
      {
        secondprev = char(second - 1);
        secondnext = '0';
      }
      else
      {
        secondprev = char(second - 1);
        secondnext = char(second + 1);
      }

      if (firstprev == secondprev || firstprev == secondnext || firstnext == secondprev || firstnext == secondnext)
        count++;
    }
    if (count == end + 1)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
