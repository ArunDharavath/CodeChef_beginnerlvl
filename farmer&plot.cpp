#include <iostream>
using namespace std;
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int t1,t2,l,b;
        cin>>l>>b;
        t1=l;
        t2=b;
        while(l!=b)
        {
            if(l>b)
            {
                l=l-b;
            }
            else{
                b=b-l;
            }
        }
        cout<<t1/l*t2/l<<"\n";
    }
    return 0;
}