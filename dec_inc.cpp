#include <iostream>

using namespace std;

int main()
{
  int num;
  cin >> num;
  if(num % 4 == 0)
  {
    printf("%d", ++num);
  }
  else
  {
    printf("%d", --num);
  }
  return 0;
}