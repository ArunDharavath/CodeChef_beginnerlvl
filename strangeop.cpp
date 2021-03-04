#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int n, k;
	    cin >> n >> k;
	    k -= 1;
	    int arr[n];
	    
	    for(int i = 0; i < n; ++i)
	    {
	        cin >> arr[i];
	        
	    }
	    int sum = 0;
	    for(int j = 0; j < n; ++j)
	    {
	        sum += arr[j];
	    }
	    while(k--)
	    {
	        sum = sum + (sum+1);
	    }
	    sum += 1;
	    if(sum % 2 == 0)
	        cout << "even" << endl;
	    else
	        cout << "odd" << endl;
	}
	return 0;
}
