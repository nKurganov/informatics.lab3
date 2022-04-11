#include <iostream>
#include "Time.h"

using namespace std;



void main()
{
	Time a;
	Time b;
	Time c;
	cin >> a;
	cin >> b;
	++a;
	cout << a << endl;
	c = (a++) + b;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}