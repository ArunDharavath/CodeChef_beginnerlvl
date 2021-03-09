#include <iostream>
#include <string>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int len , milk = 0, cookie = 0;
	    cin >> len;
	    bool flag = true;
	    string s[len];
	    for(int i = 0; i < len; ++i)
	        cin >> s[i];
	    for(int i = 0; i < len; ++i)
	    {
	        if(s[i] == "cookie")
	        {
	            if(s[i+1] != "milk")
	            {
                    flag = false;
	                break;
	            }
	        }
	    }
	    if(flag == true)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
