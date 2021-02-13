#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int ash[100005]={0};
        int n;
        cin>>n;
        int a[n],count1=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            ash[a[i]]++;
        }
        for(int i=0;i<100005;i++)
        {
            if( ash[i]>0)
                count1++;
        }
        cout << count1 << endl;
    }
}
