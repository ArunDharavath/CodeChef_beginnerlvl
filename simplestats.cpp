#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0; i < n; i++)
	        cin >> a[i];
	    sort(a,a+n);
	   double sum=0;
	   for(int i=k;i<n-k;i++) {
	       sum=sum+a[i];
	   }
	   double x=sum/(double)(n-2*k);
	   printf("%6lf\n",x);
	}
	return 0;
}
