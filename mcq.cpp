#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int len, points = 0;
	    cin >> len;
	    string s1, s2;
	    cin >> s1;
	    cin >> s2;
	    for(int i = 0; i < len; ++i)
	    {
	        if(s2[i] == 'N')
	            continue;
	        else if(s1[i] == s2[i])
	            ++points;
	        else
	        {
	            ++i;
	            continue;
	        }
	    }
	    cout << points << endl;
	}
	return 0;
}
