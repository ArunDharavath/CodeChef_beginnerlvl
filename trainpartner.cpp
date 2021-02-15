#include <iostream>
using namespace std;

int main() {
	int tc;
	int berth;
	string a[8];
	a[0]="SL";
	a[1]=a[4]="LB";
	a[2]=a[5]="MB";
	a[3]=a[6]="UB";
	a[7]="SU";
	
	cin >> tc;
	while(tc--)
	{
	    cin >> berth;
	    if(berth % 8 == 0 || berth % 8 == 7)
	    {
	        if(berth % 8 == 0)
	        {
	            cout << berth - 1 << a[berth % 8] << endl;
	        }
	        else
	        {
	            cout << berth + 1 << a[berth % 8] << endl;
	        }
	    }
	    else
	    {
	        if(berth % 8 < 4)
	            cout << berth + 3 << a[berth % 8] << endl;
	        else
	            cout << berth - 3 << a[berth % 8] << endl;
	    }
	}
	return 0;
}
