#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,m,*inputn,*inputm,i,j,temp,start,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        start=0;
        cnt=0;
        inputn=new long long int[n];
        for(i=0;i<n;i++)
            cin>>inputn[i];
        cin>>m;
        inputm=new long long int[m];
        for(i=0;i<m;i++)
            cin>>inputm[i];
        for(i=0;i<m;i++)
        {
            temp=inputm[i];
            for(j=start;j<n;j++)
            {
                if(inputn[j]==temp)
                {
                    cnt++;
                    start=j+1;
                    break;
                }
            }
        }
        if(cnt==m)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}
