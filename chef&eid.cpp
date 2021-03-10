#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int num;
	    cin >> num;
	    int i, arr[num];
	    for(i = 0; i < num; ++i)
	        cin >> arr[i];
	    int min = abs(arr[0] - arr[1]);
	    sort(arr, arr + num);
	    for(int i = 0; i < num - 1; ++i)
	    {
	        if(min > abs(arr[i] - arr[i + 1]))
	            min = abs(arr[i] - arr[i + 1]);
	        if(min == 0)
	            break;
	    }
	    cout << min << endl;
	}
	return 0;
}
