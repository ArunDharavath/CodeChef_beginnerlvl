#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int k;
	cin>>k;
	while(k--)
	{
	    string s,s1,s2;
	    cin>>s;
	    int n=s.length();
	    if(s.length()%2==0)
	    {
	        for(int i=0;i<n/2;i++)
	            s1+=s[i];
	       for(int i=n/2;i<n;i++)
	           s2+=s[i];
	       sort(s1.begin(),s1.end());
	       sort(s2.begin(),s2.end());
	       if(s1==s2)
	           cout<<"YES"<<endl;
	       else
	           cout<<"NO"<<endl;
	    }
	    else
	    {
	        for(int i=0;i<n/2;i++)
	            s1+=s[i];
	       for(int i=n/2+1;i<n;i++)
	           s2+=s[i];
	       sort(s1.begin(),s1.end());
	       sort(s2.begin(),s2.end());
	       if(s1==s2)
	           cout<<"YES"<<endl;
	       else
	           cout<<"NO"<<endl;
	    }
	}
	return 0;