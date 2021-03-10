#include <iostream>
using namespace std;
int main()
{
  int tc;
  cin >> tc;
  while(tc--)
  {
    int num, sum1 = 0, sum2 = 0;
    cin >> num;
    int x[num], y[num];
    for(int i = 0; i < num; ++i)
      cin >> x[i];
    for(int i = 0; i < num; ++i)
      cin >> y[i];
    for(int i = 0; i < num; ++i)
    {
      if(i % 2 == 0)
      {
        sum1 += x[i];
        sum2 += y[i];
      }
      else
      {
        sum1 += y[i];
        sum2 += x[i];
      }
    }
    if(sum1 > sum2)
        cout << sum2 << endl;
    else
        cout << sum1 << endl;
  }
  return 0;
}