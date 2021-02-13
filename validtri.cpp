#include <iostream>

using namespace std;

int main()
{
  int tc, a, b, c, sum;
  cin >> tc;
  while(tc--)
  {
    sum = 0;
    cin >> a >> b >> c;
    if(a + b + c == 180)
    {
      printf("YES\n");
    }
    else
    {
      printf("NO\n");
    }
    
  }
  return 0;
}