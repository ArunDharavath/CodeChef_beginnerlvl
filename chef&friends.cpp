#include <iostream>
#include <string>
using namespace std;

int main() {
	int tc, res = 0;
	cin >> tc;
	while(tc--)
	{
	    string s, s1;
	    int count = 0;
	    cin >> s;
	    s1 = "chef";
	    for(int i = 0; i < s.length()-1; ++i)
	    {
	        for(int j = 0; j < s1.length()-1; ++j)
	        {
	            if(s[i] == s1[j] && s[i+1] == s1[j+1])
	            {
	                ++count;
	                break;
	            }
	            else
	                count = 0;
	        }
	        if(count > 0)
	            break;
	    }
	    if(count > 0)
	        ++res;
	}
    cout << res;
    return 0;
}
