#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int n, number;
	char suit;
	bool card[4][13];
	for (int i=0; i<4; i++) {
		for (int j=0; j<13; j++) {
			card[i][j] = false;
		}
	}
	cin >> n;

	for (int i=0; i<n; i++) {
		cin >> suit >> number;
		switch (suit) {
			case 'S' :
				card[0][number-1] = true;
				break;
			case 'H' :
				card[1][number-1] = true;
				break;
			case 'C' :
				card[2][number-1] = true;
				break;
			case 'D' :
				card[3][number-1] = true;
				break;
		}
	}

	for (int i=0; i<4; i++) {
		for (int j=0; j<13; j++) {
			if (!card[i][j]) {
				switch (i) {
					case 0 :
						cout << "S" << " " << j+1 << endl;
						break;
					case 1 :
						cout << "H" << " " << j+1 << endl;
						break;
					case 2 :
						cout << "C" << " " << j+1 << endl;
						break;
					case 3 :
						cout << "D" << " " << j+1 << endl;
						break;
				}
			}
		}
	}


	return 0;
}
