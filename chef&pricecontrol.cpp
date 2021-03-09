#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int n, k, inp, intial_total = 0, final_total = 0;
	    cin >> n >> k;
	    for(int i = 0; i < n; ++i)
	    {
	        cin >> inp;
	        intial_total += inp;
	        if(inp <= k)
	            final_total += inp;
	        else
	            final_total += k;
	    }
	    cout << intial_total - final_total << endl;
	}
	return 0;
}
