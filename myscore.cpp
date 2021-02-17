#include <iostream>
using namespace std;

int main() {
	int tc, num;
	cin >> tc;
	while(tc--)
	{
	    cin >> num;
	    int arr[11] = {0};
	    int test, score;
    	while(num--)
	    {
	        cin >> test >> score;
	        if(score > arr[test-1])
	            arr[test-1] = score;
	    }
	    int sum = 0;
	    for(int i = 0; i < 8; i++)
	    {
	        sum += arr[i];
	    }
	    cout << sum << endl;
	}
	return 0;
}
