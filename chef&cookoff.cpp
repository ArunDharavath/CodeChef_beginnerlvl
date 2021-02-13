#include <iostream>
using namespace std;

int main() {
	int tc, sum = 0, num;
	cin >> tc;
	while(tc--)
	{
	    sum = 0;
	    for(int i = 0; i < 5; i++)
	    {
	        cin >> num;
	        sum += num;
	    }
	    if(sum == 0)
	    {
	        cout << "Beginner" << endl;
	    }
	    else if(sum == 1)
	    {
	        cout << "Junior Developer" << endl;
	    }
	    else if(sum == 2)
	    {
	        cout << "Middle Developer" << endl;
	    }
	    else if(sum == 3)
	    {
	        cout << "Senior Developer" << endl;
	    }
	    else if(sum == 4)
	    {
	        cout << "Hacker" << endl;
	    }
	    else
	    {
	        cout << "Jeff Dean" << endl;
	    }
	}
	return 0;
}
