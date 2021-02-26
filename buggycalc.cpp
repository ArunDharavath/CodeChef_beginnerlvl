#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int i, a, b, result = 0, sum = 0;
	    cin >> a >> b;
	    
	    int alen = log10(a) + 1;
	    int blen = log10(b) + 1;
	    
	    if(alen > blen)
	    {
	        int ad[alen], bd[alen];
	        
	        for(i = 0; i < alen; i++)
	        {
	            ad[i] = a%10;
	            a /= 10;
	            bd[i] = 0;
	        }
	        for(i = 0; i < blen; i++)
	        {
	            bd[i] = b%10;
	            b /= 10;
	        }
	        for(i = 0; i < alen; i++)
	        {
	            sum = ad[i] + bd[i];
	            result = result + (sum%10)*pow(10, i);
	        }
	    }
	    else
	    {
	        int ad[blen], bd[blen];
	    
	        for(i = 0; i < blen; i++)
	        {
	            bd[i] = b%10;
	            b /= 10;
	            ad[i] = 0;
	        }
	        for(i = 0; i < alen; i++)
	        {
	            ad[i] = a%10;
	            a /= 10;
	        }
	        for(i = 0; i < blen; i++)
	        {
	            sum = ad[i] + bd[i];
	            result = result + (sum%10)*pow(10, i);
	        }
	    }
	    cout << result << endl;
	}
	return 0;
}
