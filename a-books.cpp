#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int len;
	    cin >> len;
	    int a[len], b[len] = {0};
	    for(int i = 0; i < len; ++i)
	        cin >> a[i];
	    for(int i = 0; i < len; ++i)
	    {
	        for(int j = i + 1; j < len; ++j)
	        {
	            if(a[i] < a[j])
	                b[i] += 1;
	        }
	    }
	    for(int i = 0; i < len; ++i)
	        cout << b[i] << " ";
	    cout << endl;
	}
	return 0;
}
