#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(int argc, char const* argv[])
{
	int n, s[1000];
	double m, a2;
	while (cin >> n && n != 0) {
		m = 0;
		for (int i = 0; i < n; i++) {
			cin >> s[i];
			m += s[i];
		}
		m = (double)m / (double)n;
		a2 = 0;
		for (int i = 0; i < n; i++) {
			a2 += (s[i] - m) * (s[i] - m);
		}
		a2 = a2 / n;
		cout.precision(8);
		cout << fixed << sqrt( a2 ) << endl;
	}
	return 0;
}
