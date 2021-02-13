#include <iostream>

using namespace std;

int fac(int num)
{
  if( num < 0)
  {
    return -1;
  }
  else if(num == 0)
  {
    return 1;
  }
  else
  {
    return num*fac(num-1);
  }  
}

int main()
{
  int n_tc;
  cin >> n_tc;
  int num;
  int f;
  
  while(n_tc--)
  {
    cin >> num;
    f = fac(num);
    printf("%d\n",f);
  }

  return 0;
}