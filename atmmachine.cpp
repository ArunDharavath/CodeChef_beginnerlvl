#include <iostream>
using namespace std;

int main() {
	int tc, n, k, wd;
	cin >> tc;
	while(tc--)
	{
	    string s = "";
	    cin >> n >> k;
	    for(int i = 0; i < n; i++)
	    {
	        cin >> wd;
	        if(wd <= k)
	        {
	            k -= wd;
	            s += '1';
	        }
	        else
	        {
	            s += '0';
	        }
	    }
	    cout << s << endl;
	}
	return 0;
}
