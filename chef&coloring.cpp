#include <iostream>
using namespace std;

int main() {
	int tc;
	string s;
	cin >> tc;
	while(tc--)
	{
	    int rooms, countR, countG, countB, num, diff;
	    countB = countG = countR = 0;
	    cin >> rooms;
	    cin >> s;
	    
	    for(int i = 0; i < rooms; i++)
	    {
	        if(s[i] == 'R')
	        {
	            countR++;
	        }
	        else if(s[i] == 'G')
	        {
	            countG++;
	        }
	        else if(s[i] == 'B')
	        {
	            countB++;
	        }
	    }
	    if(countB >= countG && countB >= countR)
	    {
	        cout << rooms - countB << endl;
	    }
	    else if(countR >= countG && countR >= countB)
	    {
	        cout << rooms - countR << endl;
	    }
	    else
	    {
	        cout << rooms - countG << endl;
	    }
	}
	return 0;
}
