#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(int argc, char const* argv[])
{
	long double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	long double ans = sqrtl((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1));
	cout << fixed << setprecision(5) << ans << endl;
	return 0;
}
