#include <iostream>
using namespace std;

int main()
{
    int T,n;
    cin>>T;
    while(T--)
    {
        int count=0;
        cin>>n;
        count+=n/100;
        n%=100;
        if(n>0)
        {
          count+=n/50;
          n%=50;
          if(n>0)
          {
            count+=n/10;
            n%=10;
            if(n>0)
            {
              count+=n/5;
              n%=5;
              if(n>0)
              {
                count+=n/2;
                n%=2;
                count+=n;
              }
            }
          }
        }  
        cout<<count<<"\n";
    }
	return 0;
}