#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int a[5] = {5, 4, 3, 2, 1};
	cout << a[0] << a[1] << a[2] << a[3] << a[4] << endl;
	for (int i = 0; i < 5-1; i++) {
		for (int j = 0; j < 5-1-i; j++) {
			if (a[j] > a[j+1]) {
			int tmp = a[j+1];
			a[j+1] = a[j];
			a[j] = tmp;
			}
		}
		cout << a[0] << a[1] << a[2] << a[3] << a[4] << endl;
	}

	return 0;
}
