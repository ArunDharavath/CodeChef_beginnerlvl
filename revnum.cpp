#include <iostream>
using namespace std;

int main() {
	int n_tc, n, reversedNumber = 0, remainder;
	cin >> n_tc;
	for( int i = 0; i < n_tc; i++)
	{
	    cin >> n;
      reversedNumber = 0;
	    while(n != 0)
	    {
	        remainder = n%10;
	        reversedNumber = reversedNumber*10 + remainder;
	        n /= 10;
	    }
	    cout << reversedNumber;
	    printf("\n");
	}
	return 0;
}
