#include <iostream>
using namespace std;

int main() {
	int size, temp, count;
	cin >> size;
	while(size)
	{
	    count = 0;
	    int a[size];
	    for(int i = 0; i < size; i++)
	    {
	        cin >> a[i];
	    }
	    for(int i = 0; i < size; i++)
	    {
	        temp = a[i] - 1;
	        if(i == (a[temp] - 1))
	        {
	            count++;
	        }
	    }
	    if(count == size)
	    {
	        printf("ambiguous\n");
	    }
	    else
	    {
	        printf("not ambiguous\n");
	    }
	    cin >> size;
	}
	return 0;
}
