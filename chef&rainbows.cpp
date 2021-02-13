#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int l=0;int flag=1;
	    int h=n-1;
	    int mid=floor((l+h)/2);
	   if(a[0]!=1)
	   {
	       flag=0;
	   }
	   while(l<h)
	   {
	       if(a[l]!=a[h])
	       {flag=0;
	           break;
	       }
	        if(a[l]!=a[l+1] && a[l]+1 != a[l+1])
	        {
	            flag=0;
	            break;
	        }
	        l++;
	        h--;
	   }
	   if(a[mid]<7)
	   {
	       flag=0;
	   }
	   if(flag==1)
	   cout<<"yes"<<endl;
	   else
	   cout<<"no"<<endl;
	}
	return 0;
}