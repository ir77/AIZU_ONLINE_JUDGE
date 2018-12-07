#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int n, a[100];
	cin >> n;

	for (int i=n-1; i>=0; i--) {
		cin >> a[i];
	}

	int i=0;
	while (1) {
		cout << a[i];
		if (i == n-1) {
			break;
		} else {
			cout << " ";
		}
		i++;
	}
	cout << endl;

	return 0;
}
