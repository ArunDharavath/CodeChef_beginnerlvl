#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    string s;
	    cin >> s;
	    int c = 0;
	    int n = s.length();
	    for(int i = 0; i < n; ++i)
	    {
	        if((s[i] == 'C' && s[i-1] == 'E') || (s[i] == 'C' && s[i-1] == 'S'))
	        {
	            c = 1;
	        }
	        else if(s[i] == 'E' && s[i-1] == 'S')
	            c = 1;
	   }
	   if(c != 1)
	    cout << "yes" << endl;
	   else
	    cout << "no" << endl;
	}
	return 0;
}
