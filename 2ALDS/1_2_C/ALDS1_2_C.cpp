#include <iostream>
using namespace std;

void BubbleSort(string card[36], int N) {
	for (int i=0; i<N; i++) {
		for (int j=N-1; j>i; j--) {
			if (card[j-1][1] > card[j][1]) {
				string tmp = card[j-1];
				card[j-1] = card[j];
				card[j] = tmp;
			}
		}
	}
}

void SelectionSort(string card[36], int N) {
	for (int i=0; i<N; i++) {
		int minj = i;
		for (int j=i; j<N; j++) {
			if (card[j][1] < card[minj][1]) {
        minj = j;
			}
		}
		string tmp = card[i];
		card[i] = card[minj];
		card[minj] = tmp;
	}
}

int main(int argc, char const* argv[])
{
	int N;
	cin >> N;
	string card[36];
	string card2[36];
	for (int i=0; i<N; i++) {
		cin >> card[i];
		card2[i] = card[i];
	}

	BubbleSort(card, N);
	for (int i=0; i<N; i++) {
		cout << card[i];
		if (i==N-1) {
			cout << endl;
		} else {
			cout << " ";
		}
	}
	cout << "Stable" << endl;

	SelectionSort(card2, N);
	bool flag = false;
	for (int i=0; i<N; i++) {
		cout << card2[i];
		if (card2[i] !=  card[i]) {
			flag = true;
		}
		if (i==N-1) {
			cout << endl;
		} else {
			cout << " ";
		}
	}
	if (flag) {
		cout << "Not stable" << endl;
	} else {
		cout << "Stable" << endl;
	}
	
	return 0;
}
