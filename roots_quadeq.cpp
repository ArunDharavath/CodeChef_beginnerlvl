#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double a, b, c, d, x1, x2;
	cin >> a >> b >> c;
	d = (b*b) - (4*a*c);
	if(d >= 0)
	{
	    d = sqrt(d);
	    x1 = (-b + d)/(2*a);
	    x2=(-b - d)/(2*a);
	    cout << fixed << setprecision(6) << x1 << endl;
	    cout << fixed << setprecision(6) << x2 << endl;
	}
	return 0;
}
