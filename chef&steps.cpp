#include <iostream>
#include <string>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int num, len, inp;
	    cin >> num >> len;
	    string output = "";
	    
	    for(int i = 0; i < num; ++i)
	    {
	        cin >> inp;
	        if(inp % len == 0)
	            output += '1';
	        else
	            output += '0';
	    }
	    cout << output << endl;
	}
	return 0;
}
