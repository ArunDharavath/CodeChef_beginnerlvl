#include <iostream>
#include <string>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    string str;
	    cin >> str;
	    int flag = 0;
	    for(int i=1; i < str.length(); i++)
	    {
	        if(str[i] != str[i-1])
	        flag++;
	    }
	    if(flag == 0 && str[0] == '0')
	    {
	        cout << "NO" << endl;
	        continue;
	    }
	    if(flag == 0 && str[0] == '1')
	    {
	        cout << "YES" << endl;
	        continue;
	    }
	    if(str[0] == '1')
	    {
	        if(flag > 1)
	            cout << "NO" << endl;
	        else
	            cout<< "YES" << endl;
	    }
	    else if(str[0] == '0')
	    {
	        if(flag > 2)
	        cout << "NO" << endl;
	        else
	        cout << "YES" << endl;
	    }
	}
	return 0;
}
