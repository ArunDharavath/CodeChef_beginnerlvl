#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n,k;
	int rem;
	int max=0;
	while(t--)
	{
	    max=0;
	    cin>>n>>k;
	    for(int i=2; i<=k; i++)
	    {
	        max=(n%i)>max?(n%i):max;
	    }
	    cout<<max<<endl;
	}
	return 0;
}