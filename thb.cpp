#include <iostream>
using namespace std;

int main() {
	int tc, num;
	cin >> tc;
	while(tc--)
	{
	    cin >> num;
	    string s;
	    cin >> s;
	    cout << s << endl;
	    int count = 0;
	    for(int i = 0; i < num; i++)
	    {
	        if(s[i] == "I")
	        {
	            count = 1;
	            break;
	        }
	        else if (s[i] == "Y")
	        {
	            count = 0;
	            break;
	        }
	        else
	        {
	            count = 2;
	        }
	    }
	    if(count)
	    {
	        printf("INDIAN\n");
	    }
	    else if(count == 0)
	    {
	        cout << "NOT INDIAN" << endl;
	    }
	    else
	    {
	        cout << "NOT SURE" << endl;
	    }
	}
	return 0;
}
