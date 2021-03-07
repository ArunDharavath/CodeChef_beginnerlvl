#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int len;
	    cin >> len;
	    string s;
	    char temp;
	    cin >> s;
	    for(int i = 0; i < len; i+=2)
	    {
	        if((i+1) < len)
	        {
                swap(s[i], s[i+1]);
	        }
	    }
	    for(int i = 0; i < len; ++i)
	    {
	        s[i] = (122 - s[i]) + 97;
	    }
	    cout << s << endl;
	}
	return 0;
}
