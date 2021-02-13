#include <iostream>
using namespace std;

int main()
{
  int n_tc;
  int a, b;

  cin >> n_tc;
  for( int i = 0; i < n_tc; i++)
  {
    cin >> a >> b;
    cout << a + b;
    printf("\n");
  }
}