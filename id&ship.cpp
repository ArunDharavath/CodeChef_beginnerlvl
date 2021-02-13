#include <iostream>
using namespace std;

int main()
{
  int tc;
  cin >> tc;
  char id;
  while(tc--)
  {
    cin >> id;
    if(id == 'b' or id == 'B')
    {
      printf("BattleShip\n");
    }
    else if(id == 'c' or id == 'C')
    {
      printf("Cruiser\n");
    }
    else if(id == 'd' or id == 'D')
    {
      printf("Destroyer\n");
    }
    else
    {
      printf("Frigate\n");
    }
  }
  return 0;
}