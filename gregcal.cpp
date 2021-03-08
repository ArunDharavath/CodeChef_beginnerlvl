#include <iostream>
using namespace std;
int leapcount(int m,int n)
{
    int count=0;
    for(int i=m;i<n;i++)
    {
        
        if(i%400==0 || (i%100!=0 && i%4==0))
        count++;
    }
    return count;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int y;
	    cin>>y;
	    int lc=leapcount(1900,y);
	    int total=(lc*366+(y-1900-lc)*365)%7;
	    switch(total)
	    {
	        case 0:
	        cout<<"monday"<<endl; break;
	        case 1:
	        cout<<"tuesday"<<endl; break;
	        case 2:
	        cout<<"wednesday"<<endl; break;
	        case 3:
	        cout<<"thursday"<<endl; break;
	        case 4:
	        cout<<"friday"<<endl; break;
	        case 5:
	        cout<<"saturday"<<endl; break;
	        case 6:
	        cout<<"sunday" <<endl; break;
	    }
	}
	return 0;
}
