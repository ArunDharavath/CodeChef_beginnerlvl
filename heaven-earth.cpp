#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int tc;
	cin >> tc;
	int n;
	float lift, stairs, v1, v2;
	while(tc--)
	{
	    cin >> n >> v1 >> v2;
	    if(float(n/v2)*2 <= float(sqrt(2)*n/v1))
	        cout << "Elevator" << endl;
	    else
	        cout << "Stairs" << endl;
	}
	return 0;
}
