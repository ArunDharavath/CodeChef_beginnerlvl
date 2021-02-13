#include <iostream>
using namespace std;

int main()
{
  int army, even_count = 0, odd_count = 0;
  int no_wep;
  
  cin >> army;
  for(int i = 0; i < army; i++)
  {
    cin >> no_wep;
    if(no_wep%2 == 0)
    {
      even_count++;
    }
    else
    {
      odd_count++;
    }
  }
  if(even_count > odd_count)
  {
    printf("READY FOR BATTLE\n");
  }
  else
  {
    printf("NOT READY\n");
  }
  
  return 0;
}