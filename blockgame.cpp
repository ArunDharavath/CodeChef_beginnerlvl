#include <iostream>
using namespace std;

int main() {
	int n_tc, n, reversedNumber = 0, remainder;
	cin >> n_tc;
	for( int i = 0; i < n_tc; i++)
	{
	    cin >> n;
      reversedNumber = 0;
      int temp = n;
	    while(temp != 0)
	    {
	        remainder = temp%10;
	        reversedNumber = reversedNumber*10 + remainder;
	        temp /= 10;
	    }
	    if(n == reversedNumber)
      {
        printf("wins\n");
      }
      else
      {
        printf("loses\n");
      }
      
	}
	return 0;
}
