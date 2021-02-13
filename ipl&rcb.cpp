#include <iostream>
using namespace std;

int main() {
	int tc, p, m;
	cin >> tc;
	while(tc--)
	{
	    cin >> p >> m;
	    if(p <= m)
	        cout <<"0" <<endl;
	    else
	    {
	        cout << p - m << endl;
	    }
	    
	}
	return 0;
}
