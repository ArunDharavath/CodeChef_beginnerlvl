#include <iostream>
using namespace std;

int main() {
    int tc;
	cin >> tc;
	long long n, k, t, d, totaltime;
	while(tc--)
	{
	    totaltime = 0;
	    cin >> n >> k;
	    int d;
	    for(int i = 0; i < n; i++)
	    {
	        cin >> t >> d;
	        if(t >= k)
	        {
	            t = t - k;
	            totaltime += t*d;
	            k =0;
	        }
	        else
	        {
	            k = k-t;
	        }
	    }
	    cout << totaltime << endl;
	}
	return 0;
}
