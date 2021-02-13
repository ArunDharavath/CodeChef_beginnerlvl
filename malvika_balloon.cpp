#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int tc, len;
	cin>>tc;
	while(tc--)
	{
	    int a_c = 0, b_c = 0;
	    string s;
	    cin >> s;
	    len = s.length();
	    for(int i = 0; i < len; i++)
	    {
	        if(s[i] == 'a')
	        {
	            a_c++;
	        }
	        else
	        {
	            b_c++;
	        }
	    }
	    if(a_c > b_c)
	    {
	        cout << b_c << endl;
	    }
	    else
	    {
	        cout << a_c << endl;
	    }
	}
	return 0;
}
