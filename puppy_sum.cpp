#include<iostream>
using namespace std;
int sum(int b)
{
  int s = 0;
  for(int i = 1; i <= b; i++)
  {
    s += i;
  }
  return s;
}

void sum(int a, int b)
{
    int s = b;
  while(a--)
  {
    s = sum(s);
  }
  printf("%d\n", s);
}

int main()
{
  int tc, a, b;
  cin >> tc;
  while(tc--)
  {
    cin >> a >> b;
    sum(a, b);
    printf("\n");
  }
  return 0;
}