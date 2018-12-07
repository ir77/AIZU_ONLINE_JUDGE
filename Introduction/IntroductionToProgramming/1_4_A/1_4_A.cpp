#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const* argv[])
{
	double a, b;

	cin >> a >> b;
	cout << (int)(a/b) << " " << (int)a%(int)b << " " << fixed << setprecision(5) << a/b << endl;

	return 0;
}
