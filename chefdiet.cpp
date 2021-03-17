#include <iostream>
using namespace std;

#define ll long long

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    ll n, k, i, left = 0;
	    bool flag = true;
	    cin >> n >> k;
	    ll arr[n];
	    
	    for(i = 0; i < n; ++i)
	    {
	        cin >> arr[i];
	    }
	    
	    for(i = 0; i < n; ++i)
	    {
	        arr[i] += left;
	        if(arr[i] >= k)
	            left = arr[i] - k;
	        else
	        {
	            cout << "NO " << i + 1 << endl;
	            flag = false;
	            break;
	        }
	    }
	    
	    if(flag == true)
	        cout << "YES" << endl;
	}
	return 0;
}
