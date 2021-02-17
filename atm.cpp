#include <iostream>
using namespace std;

int main() {
	int x;
	float y;
	cin >> x;
	cin >> y;
	if(x % 5 != 0)
	{
	    printf("%.2f", y);
	}
	else
	{
	    if(x + 0.5 > y)
	    {
	        printf("%.2f", y);
	    }
	    else
	    {
	        printf("%.2f", y - x - 0.5);
	    }
	}
	return 0;
}
