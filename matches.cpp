#include <iostream>
using namespace std;

int main() {
	int tc, a, b, sum, digit;
	cin >> tc;
	while(tc--)
	{
	    cin >> a >> b;
	    sum = a + b;
	    int count = 0;
	    
	    while(sum > 0)
	    {
	        digit = sum % 10;
	        sum /= 10;
	        if(digit == 0 || digit == 6 || digit == 9)
	        {
	            count += 6;
	        }
	        else if(digit == 1)
	            count += 2;
	        else if(digit == 2 || digit == 3 || digit == 5)
	            count += 5;
	        else if(digit == 7)
	            count += 3;
	        else if( digit == 4)
	            count += 4;
	        else if(digit == 8)
	            count += 7;
	    }
	    cout << count << endl;
	}
	return 0;
}
