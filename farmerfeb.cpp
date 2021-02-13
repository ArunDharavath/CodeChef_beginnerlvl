#include <iostream>
using namespace std;

int main() {
    int tc, x, y, z = 1;
	cin >> tc;
	bool isprime = true;
	
	while(tc--)
	{
	    cin >> x >> y;
	    z = 1;
	    while(1)
	    {
	        for(int i = 2; i < (x + y + z); i++)
	        {
	            if((x+y+z)%i == 0)
	            {
	                isprime = false;
	                break;
	            }
	            else
	            {
	                isprime = true;
	            }
	        }
	    
	        if(isprime)
	        {
	            cout << z << endl;
	            break;
	        }
	        else
	        {
	            z++;
	        }
	    }
	}
	return 0;
}
