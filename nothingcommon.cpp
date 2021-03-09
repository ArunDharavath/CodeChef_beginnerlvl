#include <iostream>
#include <set>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int a, b;
	    cin >> a >> b;
	    int ar1[a], ar2[b], total = a + b;
	    for(int i = 0; i < a; ++i)
	        cin >> ar1[i];
	    for(int i = 0; i < b; ++i)
	        cin >> ar2[i];
	    set<int> unc;
	    for(int i = 0; i < a; ++i)
	        unc.insert(ar1[i]);
	    for(int i = 0; i < b; ++i)
	        unc.insert(ar2[i]);
	    int x = unc.size();
	    int diff = total - x;
	    cout << diff << endl;
	}
	return 0;
}
