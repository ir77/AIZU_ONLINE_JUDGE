#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int n, x;
	while (cin >> n >> x && (n != 0 || x != 0)) {
		int ans = 0;
		for (int i=1; i<=n-2; i++) {
			for (int j=i+1; j<=n-1; j++) {
				for (int k=j+1; k<=n; k++) {
					if (i + j + k == x) {
						ans++;
						break;
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
