#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int arr[26]={0};
    for(int i=0;s[i]!='\0';i++)
    {
        int c=(int)s[i];
        c=c-97;
        arr[c]=1;
    }
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int count=0;
        string s1;
        cin>>s1;
        for(int j=0;s1[j]!='\0';j++)
        {
            int c=(int)s1[j];
            c=c-97;
            if(arr[c]==0)
            count++;
            else
            count=count;
        }
        if(count>0)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
    }
}