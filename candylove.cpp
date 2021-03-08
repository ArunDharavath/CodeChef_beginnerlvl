#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int num, sum = 0;
	    cin >> num;
	    while(num--)
	    {
	        int x;
	        cin >> x;
	        sum += x;
	    }
	    if(sum % 2 != 0)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
