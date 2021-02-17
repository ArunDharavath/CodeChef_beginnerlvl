#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        string first[n], last[n];
        
        for(int i = 0;i < n; i++)
            cin >> first[i] >> last[i];
        int count[n] = {0};
        
        for(int i = 0;i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(first[i] == first[j])
                {
                    count[i]++;
                    count[j]++;
                }
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(count[i])
                cout << first[i] << " " << last[i] << endl;
            else
                cout << first[i] << endl;
        }
    }
	// your code goes here
	return 0;
}
