#include <iostream>
using namespace std;

int main(){
int N, cs1=0, cs2=0, p1, p2, lead1=0,lead2=0;
        cin>>N;

    for(int i=0; i<N; i++){
    cin>>p1>>p2;
    cs1+=p1;
    cs2+=p2;
    if(lead1<cs1-cs2){
        lead1=cs1-cs2;
    }
    else if(lead2<cs2-cs1){
        lead2=cs2-cs1;
    }
}
    if(lead1>lead2){
    cout<<1<<" "<<lead1;
}
    else if(lead2>lead1){
    cout<<2<<" "<<lead2;
}

    return 0;
}
