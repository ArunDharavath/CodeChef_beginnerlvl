#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    string s;
	    cin >> s;
	    int n = s.size();
	    int talk = 0;
	    for(int i = 0; i < n; i++)
	    {
	        if(s[i] == '>')
	            s[i] = '<';
	        else if(s[i] == '<')
	            s[i] = '>';
	    }
	    for(int i = 0; i < n-1; i++)
	    {
	        if(s[i] == '>' && s[i+1] == '<')
	            talk++;
	    }
	    cout << talk << endl;
	}
	return 0;
}
