#include <iostream>
using namespace std;

int main()
{
  int tc, num;
  cin >> tc;
  while(tc--)
  {
    cin >> num;
    if(num < 10)
    {
      printf("Thanks for helping Chef!\n");
    }
    else
    {
      printf("-1\n");
    }
    
  }
}