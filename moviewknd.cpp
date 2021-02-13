#include <iostream>
using namespace std;

int main() {
	int tc, n;
	cin >> tc;
	while(tc--)
	{
	    int count = 0;
	    cin >> n;
	    int l[n], r[n], max=0, maxr=0, ans = 0;
	    for(int i = 1; i <= n; i++)
	    {
	        cin >> l[i];
	    }
	    for(int i = 1; i <= n; i++)
	    {
	        cin >> r[i];
	    }
	    for(int i = 1; i <= n; i++)
	    {
	        if(l[i]*r[i] > max)
	        {
	            max = l[i]*r[i];
	            maxr = r[i];
	            ans = i;
	        }
	        else if(l[i]*r[i] == max)
	        {
	            if(r[i] > maxr)
	            {
	                maxr = r[i];
	                ans = i;
	            }
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}
