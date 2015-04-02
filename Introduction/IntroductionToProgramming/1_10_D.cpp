#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int n, x[100], y[100];

double minkowski (int p) {
	double ans = 0;
	for (int i=0; i<n; i++) {
		ans += pow(abs(x[i]-y[i]), p);
	}
	return pow(ans, 1.0/p);
}

double minkowski_infinite () {
	double ans = 0;
	for (int i=0; i<n; i++) {
		if (ans < abs(x[i]-y[i])) {
			ans = abs(x[i]-y[i]);
		}
	}
	return ans;
}


int main(int argc, char const* argv[])
{
	cin >> n;
	for (int i=0; i<n; i++) cin >> x[i];
	for (int i=0; i<n; i++) cin >> y[i];

	printf ("%f\n", minkowski(1));
	printf ("%f\n", minkowski(2));
	printf ("%f\n", minkowski(3));
	printf ("%f\n", minkowski_infinite());

	return 0;
}
