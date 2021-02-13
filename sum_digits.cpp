#include <iostream>

using namespace std;

int main()
{
  int n_tc, num;
  cin >> n_tc;
  
  for(int i = 0; i < n_tc; i++)
  {
    cin >> num;
    int sum;
    sum = 0;
    while( num > 0)
    {
      sum += num%10;
      num = num/10;
    }
    cout << sum;
  }

  return 0;
}