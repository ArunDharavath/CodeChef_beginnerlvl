#include <iostream>
using namespace std;

int main() {
	int tc;
	float hardness, carbon, tenstrnth;
	bool flag1, flag2, flag3;
	cin >> tc;
	while(tc--)
	{
	    cin >> hardness >> carbon >> tenstrnth;
	    flag1 = true;
	    flag2 = true;
	    flag3 = true;
	    if(hardness <= 50)
	    {
	        flag1 = false;
	    }
	    if(carbon >= 0.7)
	    {
	        flag2 = false;
	    }
	    if(tenstrnth <= 5600)
	    {
	        flag3 = false;
	    }
	    
	    if(flag1 == true && flag2 == true && flag3 == true)
	    {
	        cout << "10" << endl;
	    }
	    else if(flag1 == true && flag2 == true)
	    {
	        cout << "9" << endl;
	    }
	    else if(flag2 == true && flag3 == true)
	    {
	        cout << "8" << endl;
	    }
	    else if(flag1 == true && flag3 == true)
	    {
	        cout << "7" << endl;
	    }
	    else if(flag3 == true || flag1 == true || flag2 == true)
	    {
	        cout << "6" << endl;
	    }
	    else
	    {
	        cout << "5" << endl;
	    }
	}
	return 0;
}
