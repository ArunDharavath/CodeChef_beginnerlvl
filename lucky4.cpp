#include <iostream>
using namespace std;

int main()
{
  int tc, num, count = 0;
  cin >> tc;
  for(int i = 0; i < tc; i++)
  {
    cin >> num;
    int temp;
    count = 0;
    
    while(num > 0)
    {
      temp = num % 10;
      num = num / 10;
      if(temp == 4)
      {
        count++;
      }
    }
    printf("%d\n", count);
  }
  return 0;
}