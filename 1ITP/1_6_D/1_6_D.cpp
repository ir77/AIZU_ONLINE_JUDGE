#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int n, m;
	int a[100][100] = {{}}, b[100] = {};
	int answer[100] = {};

	cin >> n >> m;
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin >> a[i][j];
		}
	}

	for (int i=0; i<m; i++) {
		cin >> b[i];
	}


	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			answer[i] += a[i][j] * b[j];
		}
	}

	for (int i=0; i<n; i++) {
		cout << answer[i] << endl;
	}

	return 0;
}
