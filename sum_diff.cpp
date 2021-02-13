#include <iostream>

using namespace std;

int main()
{
  int a, b;
  cin >> a;
  cin >> b;
  int res = (a > b) ? a-b : a + b;
  cout << res;
  return 0;
}