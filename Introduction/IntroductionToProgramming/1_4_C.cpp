#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(int argc, char const* argv[])
{
	double r;
	cin >> r;

	cout << fixed << setprecision(6) << M_PI * r * r
		<< " "
		<< fixed << setprecision(6) << M_PI * r * 2
		<< endl;
	return 0;
}
