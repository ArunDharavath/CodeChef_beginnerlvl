#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--){
		int f=0;
		string s;
		cin >> s;
		if(s[0]==s[1]){ 
			cout << "NO" << endl; 
			continue;
		}
		else{
			for(int k=2;k<s.length();k++){
				if(k%2==0){
					if(s[k]!=s[0]){
						f=1;
						break;
					}
				}
				else{
					if(s[k]!=s[1]){
						f=1;
						break;	
					}
				}
			}
		}
	cout<<(f==0?"YES" : "NO")<<endl;
	}
	return 0;
}
