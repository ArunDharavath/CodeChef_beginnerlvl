#include <iostream>
using namespace std;

int main() {
	// your code goes here
	    long int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        long int c=0;
        long int s;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            c^=s;
        }
        cout<<c<<endl;
    }
	return 0;
}