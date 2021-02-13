#include <iostream>
using namespace std;

int main() {
	 int tc, n;
	 cin >> tc;
	 while(tc--)
	 {
	     string logg; 
	     bool flag = true;
	     cin >> logg;
	     n = logg.length();
	     for(int i = 1; i < n; i = i+2)
	     {
	         if(logg[i-1] == logg[i])
	         {
	             cout << "no" << endl;
	             flag = false;
	             break;
	         }
	     }
	     if(flag == true)
	     {
	         cout << "yes" << endl;
	     }
	 }
	return 0;
}
