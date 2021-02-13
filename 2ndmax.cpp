
#include <iostream>

using namespace std;

int main()
{
  int tc, a, b, c;
  cin >> tc;
  while(tc--)
  {
    int max = 0, secmax = 0;
    cin >> a >> b >> c;
    if( a > b && a > c)
    {
      max = a;
      if(max > b && b > c)
      {
        secmax = b;
      }
      else
      {
        secmax = c;
      } 
    }
    else if(b > a && b > c)
    {
      max = b;
      if(max > a && a > c)
      {
        secmax = a;
      }
      else
      {
        secmax = c;
      }
    }
    else
    {
       max = c;
       if(max > a && a > b)
      {
        secmax = a;
      }
      else
      {
        secmax = b;
      }
    }
    printf("%d\n", secmax);
  }
}