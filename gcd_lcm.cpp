#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    int t;
cin>>t;
while(t--)
{
    ll a,b;
    cin>>a>>b;
      ll x,y;
      x=a;
      y=b;
      ll temp;
     while(y!=0)
     {
         temp=y;
         y=x%y;
        x=temp;
         
     }
     ll hcf=x;
     
     ll lcm=(a*b)/hcf;
     cout<<hcf<<" "<<lcm<<endl;
     
    
    
}
	
	return 0;
}