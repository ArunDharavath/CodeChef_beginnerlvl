#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int a,countz=0,counto=0,i,d;
        cin>>s;
        d=s.length();
        for(i=0;i<d;i++)
        {
            if(s[i]=='1')
                counto++;
            else
                countz++;
        }
        if(countz==1||counto==1)
            cout<<"Yes \n";
        else
            cout<<"No \n";
    }
	
	return 0;
}
