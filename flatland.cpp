#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int test,a,res,ans;
	cin>>test;
	while(test)
	{ 
	    ans=0;
	    cin>>a;
	    while(a)
	    {
    	    res=sqrt(a);
    	    ans++;
    	    a=(a-(res*res));
	    }
	    cout<<ans<<endl;
	    test--;
	}
	return 0;
}