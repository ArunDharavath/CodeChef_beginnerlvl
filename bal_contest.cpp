#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int n, p, num, hard = 0, cakewalk = 0;
	    cin >> n >> p;
	    for(int i = 0; i < n; ++i)
	    {
	        cin >> num;
	        if(num >= p/2)
	            ++cakewalk;
	        if(num <= p/10)
	            ++hard;
	    }
	    if(hard == 2 && cakewalk == 1)
	        cout << "yes" <<endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}
