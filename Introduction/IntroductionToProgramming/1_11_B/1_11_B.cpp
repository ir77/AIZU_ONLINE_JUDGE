/* 0 -> Top
 * 1 -> S
 * 2 -> E
 * 3 -> W
 * 4 -> N
 * 5 -> Down
 */

#include <iostream>
using namespace std;

int numbers[6];
int tmpNumber;

void changeDirection(int a, int b) {
	if (a == 0) {
		if (b == 1) {
			tmpNumber = numbers[2];
		} else if (b == 2) {
			tmpNumber = numbers[4];
		} else if (b == 4) {
			tmpNumber = numbers[3];
		} else if (b == 3) {
			tmpNumber = numbers[1];
		}
	}
	else if (a == 5) {
		if (b == 1) {
			tmpNumber = numbers[3];
		} else if (b == 3) {
			tmpNumber = numbers[4];
		} else if (b == 4) {
			tmpNumber = numbers[2];
		} else if (b == 2) {
			tmpNumber = numbers[1];
		}
	}

	else if (a == 1) {
		if (b == 0) {
			tmpNumber = numbers[3];
		} else if (b == 3) {
			tmpNumber = numbers[5];
		} else if (b == 5) {
			tmpNumber = numbers[2];
		} else if (b == 2) {
			tmpNumber = numbers[0];
		}
	}
	else if (a == 4) {
		if (b == 0) {
			tmpNumber = numbers[2];
		} else if (b == 2) {
			tmpNumber = numbers[5];
		} else if (b == 5) {
			tmpNumber = numbers[3];
		} else if (b == 3) {
			tmpNumber = numbers[0];
		}
	}

	else if (a == 2) {
		if (b == 1) {
			tmpNumber = numbers[5];
		} else if (b == 5) {
			tmpNumber = numbers[4];
		} else if (b == 4) {
			tmpNumber = numbers[0];
		} else if (b == 0) {
			tmpNumber = numbers[1];
		}
	}
	else if (a == 3) {
		if (b == 1) {
			tmpNumber = numbers[0];
		} else if (b == 0) {
			tmpNumber = numbers[4];
		} else if (b == 4) {
			tmpNumber = numbers[5];
		} else if (b == 5) {
			tmpNumber = numbers[1];
		}
	}
}

int main(int argc, char const* argv[])
{
	for (int i=0; i<6; i++) {
		cin >> numbers[i];
	}

	int questions, a, b;
	cin >> questions;
	for (int i=0; i<questions; i++) {
		cin >> a >> b;
		for (int j=0; j<6; j++) {
			for (int k=0; k<6; k++) {
				if (numbers[j]==a && numbers[k]==b) {
					changeDirection(j, k);
				}
			}
		}
		cout << tmpNumber << endl;
	}
	return 0;
}
