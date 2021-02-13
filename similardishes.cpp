#include <iostream>
using namespace std;

int main() {
	string dish1[4], dish2[4];
	int tc, count = 0, n;
	cin >> tc;
	while(tc--)
	{
	    count = 0;
	    cin >> dish1[0] >> dish1[1] >> dish1[2] >> dish1[3];
	    cin >> dish2[0] >> dish2[1] >> dish2[2] >> dish2[3];
	    for(int i = 0; i < 4; i++)
	    {
	        for(int j = 0; j < 4; j++)
	        {
	            if(dish1[i] == dish2[j])
	            {
	                count++;
	            }
	        }
	    }
	    
	    if(count >= 2)
	        cout << "similar" << endl;
	    else
	        cout << "dissimilar" << endl;
	}
	return 0;
}
