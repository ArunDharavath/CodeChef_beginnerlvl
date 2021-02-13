#include <iostream>
using namespace std;

int main() {
	int tc, min, rating;
	cin >> tc;
	cin >> min;
	while(tc--)
	{
	    cin >> rating;
	    if(rating >= min)
	        cout << "Good boi" << endl;
	    else
	        cout << "Bad boi" << endl;
	}
	return 0;
}
