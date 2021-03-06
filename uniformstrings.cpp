#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int c = 0;
	    string s1;
	    cin >> s1;
	    for(int i = 1; i < s1.length() ; i++)
	    {
	        if(s1[i] != s1[i - 1])
	        {
	            ++c;
	        }
	        if(i == s1.length() - 1)
	        {
	            if((s1[i] == '0' && s1[0] == '1') || (s1[i] == '1' && s1[0] == '0'))
	                ++c;
	        }
	    }
	    if(c <= 2)
	        cout << "uniform" << endl;
	    else
	        cout << "non-uniform" << endl;
	}
	return 0;
}
