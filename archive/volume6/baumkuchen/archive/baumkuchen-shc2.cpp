#include <iostream>
#include <vector>
#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <math.h>
using namespace std;

unsigned long long int getMin(unsigned long long int a[3]) {
	if (a[0] <= a[1] && a[0] <= a[2]) {
		return a[0];
	}
	if (a[1] <= a[0] && a[1] <= a[2]) {
		return a[1];
	}
	return a[2];
}

int getMinusLoopNumber (int num) {
	if (num-1>=0) {
		return num-1;
	}
	return 2;
}

int getPlusLoopNumber (int num) {
	if (num+1<=2) {
		return num+1;
	}
	return 0;
}

int main(int argc, char const* argv[]) {
	srand((unsigned int)time(NULL));
	unsigned long long endCounter = 0;
	unsigned long long min = 0;
	unsigned long long sum[3] = {0};
	int n;
	cin >> n;

	vector< vector<unsigned long long> > array;  
	array.resize(3);
	for (int i=0; i<n; i++) {
		int tmp;
		cin >> tmp;
		if (i<n/3) {
			array[0].push_back(tmp);
			sum[0] += tmp;
		} else if (n/3<=i && i<n*2/3) {
			array[1].push_back(tmp);
			sum[1] += tmp;
		} else {
			array[2].push_back(tmp);
			sum[2] += tmp;
		}
	}

	for (;;) {
		int arrayNum = int(rand() % 3);
		bool isFront = int(rand() % 2);
		if (array[arrayNum].size() == 1) {
			continue;
		} else {
			if (isFront) {
				int tmpNum = getMinusLoopNumber(arrayNum);
				sum[tmpNum] += array[arrayNum].front();
				sum[arrayNum] -= array[arrayNum].front();
				array[tmpNum].push_back(array[arrayNum].front());
				array[arrayNum].erase(array[arrayNum].begin());
			} else {
				int tmpNum = getPlusLoopNumber(arrayNum);
				sum[tmpNum] += array[arrayNum].back();
				sum[arrayNum] -= array[arrayNum].back();
				array[tmpNum].insert(array[tmpNum].begin(), array[arrayNum].back());
				array[arrayNum].pop_back();
			}
		}
		if (min < getMin(sum)) {
			endCounter = 0;
			min = getMin(sum);
			// cout << "min " << min << endl;
		} else {
			if (int(rand() % int(sqrt(n))) != 0) {
				continue;
			}
			endCounter++;
			if (endCounter > n * n) {
				break;
			}
			if (isFront) {
				int tmpNum = getMinusLoopNumber(arrayNum);
				sum[arrayNum] += array[tmpNum].back();
				sum[tmpNum] -= array[tmpNum].back();
				array[arrayNum].insert(array[arrayNum].begin(), array[tmpNum].back());
				array[tmpNum].pop_back();
			} else {
				int tmpNum = getPlusLoopNumber(arrayNum);
				sum[arrayNum] += array[tmpNum].front();
				sum[tmpNum] -= array[tmpNum].front();
				array[arrayNum].push_back(array[tmpNum].front());
				array[tmpNum].erase(array[tmpNum].begin());
			}
		}
	}
	cout << min << "\n";
	return 0;
}
