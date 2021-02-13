#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float q,p;
	    cin>>q>>p;
	    if(q>=1 && q<1000)
	    printf("%.6f\n",q*p);
	    else
	       printf("%.6f\n",q*p*0.9);
	  	}
	return 0;
}