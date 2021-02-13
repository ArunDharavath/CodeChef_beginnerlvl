#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,x,y;
        cin>>m>>x>>y;
        int dist =x*y;
        int ar[m];
        for(int i=1;i<=m;i++)
        {
            cin>>ar[i];
          }
          int max,min,count =-1;
          int b[101];
          for(int j=1;j<=100;j++)
          {
            b[j]=0;
          }
            for(int i=1;i<=m;i++){
                max=dist+ar[i];
                min=ar[i]-dist;
                if(max>=100)
                {
                    max=100;
                }
                if(min<=1)
                {
                    min=1;
                }
                for(int j=min;j<=max;j++)
                {
                    b[j]=1;
                }

            }
            for(int k=0;k<=100;k++)
                {
                if(b[k]==0)
                {
                    count+=1;
                }
            }


        cout<<count<<endl;
    }

return 0;
}
