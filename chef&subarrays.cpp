#include<iostream>
using namespace std;
int main()
{
	int t,n,len=0;
	long long int sum=0,pro=1,count=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int *arr=new long long int[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		while(len<n)
		{
			for(int l=len;l<n;l++)
			{
				for(int i=len;i<=l;i++)
				{	
					sum=sum+arr[i];
					pro=pro*arr[i];
				}
				if(sum==pro)
				{
					count++;
				}
				sum=0;
				pro=1;
			}
			len++;
		//	j=len;
		}
		cout<<count<<endl;
		count=len=0;
	}
	return 0;
}