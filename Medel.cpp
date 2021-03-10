#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        ll max = LLONG_MIN, min = LLONG_MAX;
        ll maxp, minp;
        cin >> n;
        ll a[n];
        for(i = 0; i < n; i++) 
        {
            cin >> a[i];
            if(max < a[i])
            {
                max = a[i]; 
                maxp = i;
            }
            if(min > a[i])
            {
                min=a[i]; 
                minp = i;
            }
        }
        sort(a, a + n);
        if(maxp < minp)
            cout << max << " " << min << endl;
        else
            cout << min << " " << max << endl;
    }
}