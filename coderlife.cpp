#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int count = 0;
	    bool bored = false;
	    for(int i = 0; i < 30; ++i)
	    {
	        int x;
	        cin >> x;
	        if(x == 1)
	            count++;
	        else
	            count = 0;
	        bored |= (count > 5);
	    }
	    cout << (bored ? "#coderlifematters" : "#allcodersarefun") << endl;

	}
	return 0;
}
