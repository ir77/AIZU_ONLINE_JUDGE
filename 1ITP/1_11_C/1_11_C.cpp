#include <iostream>
using namespace std;

int dice[6];
int dice2[6];

void turnDice2(char s) {
	int tmpNumber;
	if (s == 'E'){
		tmpNumber = dice2[0];
		dice2[0] = dice2[3];
		dice2[3] = dice2[5];
		dice2[5] = dice2[2];
		dice2[2] = tmpNumber;
	} 
	else if (s == 'W'){
		tmpNumber = dice2[0];
		dice2[0] = dice2[2];
		dice2[2] = dice2[5];
		dice2[5] = dice2[3];
		dice2[3] = tmpNumber;
	} 
	else if (s == 'S'){
		tmpNumber = dice2[0];
		dice2[0] = dice2[4];
		dice2[4] = dice2[5];
		dice2[5] = dice2[1];
		dice2[1] = tmpNumber;
	} 
	else if (s == 'N'){
		tmpNumber = dice2[0];
		dice2[0] = dice2[1];
		dice2[1] = dice2[5];
		dice2[5] = dice2[4];
		dice2[4] = tmpNumber;
	} 
	else if (s == 'R') {
		tmpNumber = dice2[1];
		dice2[1] = dice2[2];
		dice2[2] = dice2[4];
		dice2[4] = dice2[3];
		dice2[3] = tmpNumber;
	}
}

bool makeDice2TopEqualToDice1(int result) {
	switch (result) {
		case 0:
			break;
		case 1:
			turnDice2('N');
			break;
		case 2:
			turnDice2('W');
			break;
		case 3:
			turnDice2('E');
			break;
		case 4:
			turnDice2('S');
			break;
		case 5:
			turnDice2('S');
			turnDice2('S');
			break;
		case -1:
			return false;
	}
	return true;
}

bool checkDice2EqualToDice1() {
	for (int i=0; i<6; i++) {
		if (dice[i] != dice2[i])
			return false;
	}
	return true;
}

bool checkDice() {
	for (int i=0; i<6; i++) {
		if (dice[0] == dice2[i]) {
			makeDice2TopEqualToDice1(i);
			for (int i=0; i<4; i++) {
				turnDice2('R');
				if (checkDice2EqualToDice1()) {
					return true;
				}
			}
		}
	}

	return false;
}
int main(int argc, char const* argv[])
{
	for (int i=0; i<6; i++) {
		cin >> dice[i];
	}
	for (int i=0; i<6; i++) {
		cin >> dice2[i];
	}
	if (checkDice()) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
