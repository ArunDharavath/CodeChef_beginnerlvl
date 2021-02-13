#include <iostream>
using namespace std;

int main() {
	int tc, num;
	cin >> tc;
	while(tc--)
	{
	    cin >> num;
	    int allot_time[num];
	    int req_time[num];
	    int count = 0;
	    for(int i = 0; i < num; i++)
	    {
	        cin >> allot_time[i];
	    }
	    for(int i = 0; i < num; i++)
	    {
	        cin >> req_time[i];
	        if(i==0)
	        {
	            if(req_time[i] <= allot_time[i])
	                count++;
	        }
	        else
	        {
	            if(req_time[i] <= allot_time[i] - allot_time[i-1])
	                count++;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
