#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,n;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>n;
	   if(n%2==0)
	   {
	      if(a>b)
	      cout<<a/b<<"\n";
	      else
	      cout<<b/a<<"\n";
	   }
	   else
	   {
	      if(2*a>b)
	      cout<<((2*a)/b)<<"\n";
	      else
	      cout<<(b/(2*a))<<"\n";
	   }
	}
	return 0;
}
