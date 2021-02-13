#include <iostream>
using namespace std;

int main() {
	int tc;
	int limak_max, bob_max;
	cin >> tc;
	
	while(tc--)
	{
	    cin >> limak_max >> bob_max;
	    int limak = 1, bob = 2;
	    int limak_total = 1, bob_total = 2;
	    bool lflag = true, bflag = true;
	    
	    while(1)
	    {
	        if(limak_total > limak_max)
	        {
	            lflag = false;
	            break;
	        }
	        else if(bob_total > bob_max)
	        {
	            bflag = false;
	            break;
	        }
	        else
	        {
	            limak += 2;
	            bob += 2;
	            limak_total += limak;
	            bob_total += bob;
	        }
	    }
	    
	    if(lflag)
	    {
	        cout << "Limak" << endl;
	    }
	    else
	    {
	        cout << "Bob" << endl;
	    }
	}
	return 0;
}
