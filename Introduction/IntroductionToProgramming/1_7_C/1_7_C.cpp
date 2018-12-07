#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int r, c;
	cin >> r >> c;
	int array[100][100] = {{}};
	for (int i=0; i<r; i++) {
		for (int j=0; j<c; j++) {
			cin >> array[i][j];
		}
	}

	int row_sum = 0;
	for (int i=0; i<r; i++) {
		int tmp_sum = 0;
		for (int j=0; j<c; j++) {
			cout << array[i][j] << " ";
			tmp_sum += array[i][j];
		}
		cout << tmp_sum << endl;
		row_sum += tmp_sum;
	}

	for (int j=0; j<c; j++) {
		int tmp_sum = 0;
		for (int i=0; i<r; i++) {
			tmp_sum += array[i][j];
		}
		cout << tmp_sum << " ";
	}
	cout << row_sum << endl;

	return 0;
}
