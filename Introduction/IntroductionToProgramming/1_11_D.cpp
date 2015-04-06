#include <iostream>
using namespace std;

int n, dice[100][6];

void turnDice2(int second, char s) {
	int tmpNumber;
	if (s == 'E'){
		tmpNumber = dice[second][0];
		dice[second][0] = dice[second][3];
		dice[second][3] = dice[second][5];
		dice[second][5] = dice[second][2];
		dice[second][2] = tmpNumber;
	} 
	else if (s == 'W'){
		tmpNumber = dice[second][0];
		dice[second][0] = dice[second][2];
		dice[second][2] = dice[second][5];
		dice[second][5] = dice[second][3];
		dice[second][3] = tmpNumber;
	} 
	else if (s == 'S'){
		tmpNumber = dice[second][0];
		dice[second][0] = dice[second][4];
		dice[second][4] = dice[second][5];
		dice[second][5] = dice[second][1];
		dice[second][1] = tmpNumber;
	} 
	else if (s == 'N'){
		tmpNumber = dice[second][0];
		dice[second][0] = dice[second][1];
		dice[second][1] = dice[second][5];
		dice[second][5] = dice[second][4];
		dice[second][4] = tmpNumber;
	} 
	else if (s == 'R') {
		tmpNumber = dice[second][1];
		dice[second][1] = dice[second][2];
		dice[second][2] = dice[second][4];
		dice[second][4] = dice[second][3];
		dice[second][3] = tmpNumber;
	}
}

bool makeDice2TopEqualToDice1(int second, int result) {
	switch (result) {
		case 0:
			break;
		case 1:
			turnDice2(second, 'N');
			break;
		case 2:
			turnDice2(second, 'W');
			break;
		case 3:
			turnDice2(second, 'E');
			break;
		case 4:
			turnDice2(second, 'S');
			break;
		case 5:
			turnDice2(second, 'S');
			turnDice2(second, 'S');
			break;
		case -1:
			return false;
	}
	return true;
}

bool checkDice2EqualToDice1(int first, int second) {
	for (int i=0; i<6; i++) {
		if (dice[first][i] != dice[second][i])
			return false;
	}
	return true;
}

bool checkDice() {
	for (int i=0; i<n-1; i++) {
		for (int j=1; j<n; j++) {
			if (i == j) {
				continue;
			}
			for (int k=0; k<6; k++) {
				if (dice[i][0] == dice[j][k]) {
					makeDice2TopEqualToDice1(j, k);
					for (int l=0; l<4; l++) {
						turnDice2(j, 'R');
						if (checkDice2EqualToDice1(i, j)) {
							return false;
						}
					}
				}
			}
		}
	}
	return true;
}
int main(int argc, char const* argv[]) {
	cin >> n;
	for (int i=0; i<n; i++) {
		for (int j=0; j<6; j++) {
			cin >> dice[i][j];
		}
	}
	if (checkDice()) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
