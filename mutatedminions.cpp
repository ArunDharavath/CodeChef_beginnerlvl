#include <iostream>
using namespace std;

int main() {
	int tc, num_minions, add, count, minion_char;
	cin >> tc;
	while(tc--)
	{
	    cin>>num_minions>>add;
	    count=0;
	    while(num_minions--)
	    {
	        cin>>minion_char;
	        if((minion_char+add)%7==0)
	            count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
