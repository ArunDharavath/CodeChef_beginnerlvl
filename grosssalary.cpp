#include <iostream>
using namespace std;

int main() {
	int tc, salary;
	float gs;
	cin >> tc;
	while(tc--)
	{
	    cin >> salary;
	    if(salary < 1500)
	    {
	        gs = 2*salary;
	    }
	    else
	    {
	        gs = salary + 500 + 0.98*salary;
	    }
	    printf("%.2f\n", gs);
	}
	return 0;
}
