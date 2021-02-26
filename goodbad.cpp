#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int l,k;
    cin>>l>>k;
    string str;
    cin>>str;
    // cout<<l<<" "<<k<<" "<<str<<endl;
    int scount = 0;
    int ccount = 0;
    for(int i =0 ; i<l;i++)
    {
        if(str[i] <= 122 && str[i] >=97)
            scount+=1;
        else
            ccount+=1;
    }
    if(k >= ccount && k >= scount)
        cout<<"both"<<endl;
    else if(k >= ccount && k < scount)
        cout<<"chef"<<endl;
    else if(k >= scount && k < ccount)
        cout<<"brother"<<endl;
    else
        cout<<"none"<<endl;
}
return 0;

}