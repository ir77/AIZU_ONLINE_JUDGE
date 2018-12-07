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

void changeDirection(char s) {
	int tmpNumber;
	if (s == 'E'){
		tmpNumber = numbers[0];
		numbers[0] = numbers[3];
		numbers[3] = numbers[5];
		numbers[5] = numbers[2];
		numbers[2] = tmpNumber;
	} 
	else if (s == 'W'){
		tmpNumber = numbers[0];
		numbers[0] = numbers[2];
		numbers[2] = numbers[5];
		numbers[5] = numbers[3];
		numbers[3] = tmpNumber;
	} 
	else if (s == 'S'){
		tmpNumber = numbers[0];
		numbers[0] = numbers[4];
		numbers[4] = numbers[5];
		numbers[5] = numbers[1];
		numbers[1] = tmpNumber;
	} 
	else if (s == 'N'){
		tmpNumber = numbers[0];
		numbers[0] = numbers[1];
		numbers[1] = numbers[5];
		numbers[5] = numbers[4];
		numbers[4] = tmpNumber;
	} 
}

int main(int argc, char const* argv[])
{
	string directions;

	for (int i=0; i<6; i++) {
		cin >> numbers[i];
	}

	cin >> directions;
	for (int i=0; i<directions.size(); i++) {
		changeDirection(directions[i]);
	}
	cout << numbers[0] << endl;

	return 0;
}
