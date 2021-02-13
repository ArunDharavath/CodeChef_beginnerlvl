#include <iostream>
using namespace std;

int main() {
	int num, count = 0, dig;
    cin >> num;
    while(num > 0)
    {
        dig = num%10;
        num = num/10;
        count++;
    }
    if(count > 3)
        cout << "More than 3 digits" << endl;
    else
        cout << count;
	return 0;
}
