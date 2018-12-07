#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(int argc, char const* argv[])
{
	long double a, b, C;
	cin >> a >> b >> C;
	cout.precision(8);
	cout << fixed << a * b * sin(C*M_PI/180) / 2 << endl;
	cout << fixed << a + b + sqrt(a*a+b*b-2*(a*b * cos(C*M_PI/180))) << endl;
	cout << fixed << b * sin(C * M_PI/180) << endl;
	return 0;
}
