#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int tc, a, b;
  cin >> tc;
  while(tc--)
  {
    cin >> a >> b;
    printf("%d %d\n", max(a,b) , a + b);
  }
}