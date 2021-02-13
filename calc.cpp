#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double a,b;
	char c;
	cin>>a>>b>>c;
	if(c=='+')
	cout<<a+b<<endl;
	if(c=='-')
	cout<<a-b<<endl;
	if(c=='*')
	cout<<a*b<<endl;
	if(c=='/')
	cout<<fixed<<setprecision(6)<<a/b<<endl;
	return 0;
}
