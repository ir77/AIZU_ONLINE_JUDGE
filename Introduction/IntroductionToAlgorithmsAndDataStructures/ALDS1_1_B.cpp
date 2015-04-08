#include <iostream>
using namespace std;

int gcd (int x, int y) {
	if (x < y) {
		int tmp = x;
		x = y;
		y = tmp;
	}
	if (x%y == 0) {
		return y;
	} else {
		return gcd (y, x%y);
	}
}

int main(int argc, char const* argv[])
{
	int x, y;
	cin >> x >> y;
	cout << gcd (x, y) << endl;
	return 0;
}

/*
int main(int argc, char const* argv[])
{
	int x, y, gcd = 0;
	cin >> x >> y;
	int rest = x >= y ? x%y : y%x;
	if (rest == 0) {
		rest = x;
	}
	for (int i=1; i<=rest; i++) {
		if (x%i==0 && y%i==0) {
			gcd = i;
		}
	}
	cout << gcd << endl;
	return 0;
}*/
