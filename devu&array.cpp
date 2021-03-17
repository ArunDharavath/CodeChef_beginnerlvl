#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n, q, num;
	cin >> n >> q;
    ll arr[n];
    
    for(ll i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr, arr + n);
	while(q--)
	{
	    cin >> num;
	    cout << ((arr[0] <= num && num <= arr[n - 1]) ? "Yes" : "No") << endl;
    }
	return 0;
}
