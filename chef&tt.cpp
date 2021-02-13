#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    string chef;
	    cin >> chef;
	    int n = chef.size();
	    int count1 = 0, count0 = 0;
	    int win = 0;
	    for(int i = 0; i < n; i++)
	    {
	        if(chef[i] == '1')
	            count1++;
	        else
	            count0++;
	    }
	    if(count1 > count0)
	        cout << "WIN" << endl;
	    else
	        cout << "LOSE" << endl;
	}
	return 0;
}
