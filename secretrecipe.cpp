#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	   float x1, x2, x3, v1, v2;
	    cin >> x1 >> x2 >> x3 >> v1 >> v2;
	    if((x3 - x1)/v1 > (x2 - x3)/v2)
	        cout << "Kefa" << endl;
	    else if((x3 - x1)/v1 < (x2 - x3)/v2) 
	        cout << "Chef" << endl;
	   else
	        cout << "Draw" << endl;
	}
	return 0;
}
