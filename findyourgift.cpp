#include <iostream>
using namespace std;

int main() {
	int tc, x, y;
	cin >> tc;
	while(tc--)
	{
	    int size;
	    x = 0;
	    y = 0;
	    cin >> size;
	    char dir[size];
	    for(int i = 0; i < size; i++)
	    {
	        cin >> dir[i];
	    }
	    for(int i = 0; i < size; i++)
	    {
	        if(dir[i] == 'L' && (i==0 ||( dir[i-1]!='L' && dir[i-1]!='R')))
	            x-=1;
	        else if(dir[i] == 'R' && (i==0 ||( dir[i-1]!='L' && dir[i-1]!='R')))
	            x+=1;
	        else if(dir[i] == 'U' && (i==0 ||( dir[i-1]!='U' && dir[i-1]!='D')))
	            y+=1;
	        else if(dir[i] == 'D' && (i==0 ||( dir[i-1]!='U' && dir[i-1]!='D')))
	            y-=1;
	    }
	    cout << x << " " << y << endl;
	}
	return 0;
}
