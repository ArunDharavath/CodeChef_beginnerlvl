#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int n, s, i;
	    cin >> n >> s;
	    int p[n], pp[n];
	    
	    for(i = 0; i < n; ++i)
	        cin >> pp[i];
	        
	    for(i = 0; i < n; ++i)
	        cin >> p[i];
	    int min1 = 100, min2 = 101;
	    
	    for(i = 0; i < n; ++i)
	    {
	        if(p[i] == 0 && pp[i] < min1)
    	        min1 = pp[i];
	    }
	    for(i = 0; i < n; ++i)
	    {
	        if(pp[i] < min2 && p[i] == 1)
	            min2 = pp[i];
	    }
	    if(s + min1 + min2 <= 100)
	        cout << "yes" << endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}
