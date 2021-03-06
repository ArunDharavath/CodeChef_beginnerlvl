#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    int c=0,h=0,e=0,f=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='C') c++;
        else if(s[i]=='H'&& c>0)
        {
            h++; 
            c--;
        }
        else if(s[i]=='E'&& h>0)
        {
            e++; 
            h--;
        }
        else if(s[i]=='F'&& e>0)
        {
            f++; 
            e--;
        }
    }
    cout<<f<<"\n";
	return 0;
}
