#include <iostream>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int num;
        cin>>num;
        if(num%5==0){
            if(num%10==0){
                cout<<0<<endl;
            }
            else if(num%10!=0){
                cout<<1<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
}
