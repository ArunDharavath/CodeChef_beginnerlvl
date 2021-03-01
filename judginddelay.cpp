#include <iostream>
using namespace std;

int main() {
	int tc, count = 0;
	cin >> tc;
	while(tc--)
	{
	    int x;
	    cin >> x;
	    count = 0;
	    while(x--)
	    {
	        int s, j;
	        cin >> s >> j;
	        if(j-s > 5)
	            count++;
	    }
	    cout << count << endl;
	}
	
	return 0;
}
