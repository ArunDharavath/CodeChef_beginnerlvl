#include <iostream>
#include <string>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    string s;
	    cin >> s;
	    int len = s.length(), ucount = 0, dcount = 0;
	    for(int i = 0; i < len; ++i)
	    {
	        if(s[i] == 'D' && s[i + 1] != 'D')
	            dcount += 1;
	        if(s[i] == 'U' && s[i + 1] != 'U')
	            ucount += 1;
	    }
	    if(ucount >= dcount)
	        cout << dcount << endl;
	    else
	        cout << ucount << endl;
	}
	return 0;
}
