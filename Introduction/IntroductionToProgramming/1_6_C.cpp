#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int n, b, f, r, v, bill[4][3][10] = {{{}}};
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> b >> f >> r >> v;
		bill[b-1][f-1][r-1] += v;
	}
	

	for (int i=0; i<4; i++) {
		for (int j=0; j<3; j++) {
			for (int k=0; k<10; k++) {
				cout << " " << bill[i][j][k];
			}
			cout << endl;
		}
		if (i==3) return 0;
		cout << "####################" << endl;
	}
	return 0;
}
