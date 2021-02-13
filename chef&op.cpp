#include <iostream>

using namespace std;

int main()
{
  int tc, a, b;
  cin >> tc;
  while(tc--)
  {
    cin >> a >> b;
    if(a > b)
    {
      printf(">\n");
    }
    else if(a < b)
    {
      printf("<\n");
    }
    else
    {
      printf("=\n");
    }
    
  }
  return 0;
}