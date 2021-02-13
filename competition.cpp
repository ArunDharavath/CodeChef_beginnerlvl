#include <iostream>
using namespace std;
#include <cmath>
int max(int a[], int n)
{
    int m = 0;
    for(int i = 1; i < n; i++)
    {
        if(a[m] <= a[i])
            m = i;
    }
    return m;
}

int main() {
	int tc, a_max, b_max, n;
	cin >> tc;
	while(tc--)
	{
	    cin >> n;
	    int a[n], b[n], a_sum = 0, b_sum = 0;
	    for(int i = 0; i < n; i++)
	        cin >> a[i];
	    for(int i = 0; i < n; i++)
	        cin >> b[i];
	    a_max = max(a, n);
	    b_max = max(b, n);
	    a[a_max] = 0;
	    b[b_max] = 0;
	    for(int i = 0; i < n; i++)
	    {
	        a_sum += a[i];
	        b_sum += b[i];
	    }
	    if(a_sum < b_sum)
	        cout << "Alice" << endl;
	    else if(b_sum < a_sum)
	        cout << "Bob" << endl;
	   else
	       cout << "Draw" << endl;
	}
	return 0;
}
