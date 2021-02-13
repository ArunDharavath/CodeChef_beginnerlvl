#include <iostream>
using namespace std;

int main() {
	int tc, a, b, c, d;
	cin >> tc;
	while(tc--)
	{
	    cin >> a >> b >> c >> d;
	    if(a == b)
	    {
	        if(c == d)
	        {
	            cout << "YES" << endl;
	        }
	        else
	        {
	            cout << "NO" << endl;
	        }
	    }
	    else if(a == c)
	    {
	        if(b == d)
	        {
	            cout << "YES" << endl;
	        }
	        else
	        {
	            cout << "NO" << endl;
	        }
	    }
	    else if(a == d)
	    {
	        if(b == c)
	        {
	            cout << "YES" << endl;
	        }
	        else
	        {
	            cout << "NO" << endl;
	        }
	    }
	    else
	    {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
