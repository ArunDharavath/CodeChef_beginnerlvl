#include <iostream>
using namespace std;

int main() {
	int tc, n;
	cin >> tc;
	while(tc--)
	{
	    cin >> n;
	    string s;
	    cin >> s;
	    int count = 0;
	    if(n == 1)
	    {
	        cout << "0" << endl;
	        continue;
	    }
	    for(int i=0; i<n-1; i++){
            if((s[i] != 'a' && s[i] !='e' && s[i] !='i' && s[i] != 'o' && s[i] !='u') && (s[i+1] == 'a' || s[i+1] == 'e' || s[i+1] =='i' || s[i+1] =='o' || s[i+1] =='u')){
                count++;
            }
        }
	    cout << count << endl;
	}
	return 0;
}
