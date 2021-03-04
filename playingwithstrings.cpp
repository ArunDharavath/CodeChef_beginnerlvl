#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int  c1 = 0, c2 = 0, n;
	    string s1, s2;
	    cin >> n;
	    cin >> s1 >> s2;
	    int count[n] = {0};
	    for(int i = 0; i < n; i++)
	    {
	        if(s1[i] == '1')
	            c1++;
	        if(s2[i] == '1')
	            c2++;
	    }
	    if(c1 == c2)
	    {
	        cout << "YES" << endl;
	    }
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
