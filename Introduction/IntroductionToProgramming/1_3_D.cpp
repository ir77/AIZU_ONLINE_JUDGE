#include <iostream>
using namespace std;
int main(int argc, char const* argv[])
{
	int a, b, c, ans = 0;
	cin >> a >> b >> c;
	for (int i=a; i<=b; i++) {
		if (c % i == 0) {
			ans++;
		}
	}
	cout << ans << endl;

	return 0;
}
