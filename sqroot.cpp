#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int tc, num;
  cin >> tc;
  while(tc--)
  {
    cin >> num;
    printf("%d\n", int(round(sqrt(num))));
  }
  return 0;
}
