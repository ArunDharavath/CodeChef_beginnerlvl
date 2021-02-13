#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    long long n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int x;
        x=sqrt(1+8*n);
        x=(x-1)/2;
        cout<<x<<endl;
    }
    return 0;
}