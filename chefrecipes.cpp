#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int gcdd(int a, int b)
{
    if(b==0)
    	return a;
    return gcdd(b,a%b);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        
        for(int i = 0; i < n; i++)
            cin >> a[i];
        
        int gcd = a[0];
        for(int i = 0; i < n; i++)
        {
            gcd = gcdd(gcd, a[i]);
        }
        for (int i = 0; i < n; i++) {
            cout<<a[i]/gcd<<" ";
        }
        cout<<endl;
    }
	return 0;
}