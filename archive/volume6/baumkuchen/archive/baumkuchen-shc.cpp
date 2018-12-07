#include <iostream>
#include <stdio.h>
#include <time.h>
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

int main(int argc, char const* argv[])
{
	srand((unsigned int)time(NULL));
	int n, hoge;
	int knife[3] = {0, 1, 2};
	cin >> n;
	unsigned long long input[n];
	unsigned long long max=0, min=0;
	unsigned long long tmp[3]={0};
	for (int i=0; i<n; i++) {
		cin >> input[i];
		max += input[i];
	}
	tmp[0] = input[0];
	tmp[1] = input[1];
	tmp[2] = max - tmp[0] - tmp[1];

	cout << tmp[0] << " " << tmp[1] << " " << tmp[2] << endl;
	while (1) {
		bool direction = int(rand() % 2);
		int num = int(rand() % 3);
		int num1 = num + 1;
		if (num1 > 2) {
			num1 = num1 - 3;
		}
		int num2 = num + 2;
		if (num2 > 2) {
			num2 = num2 - 3;
		}
		int numMinuxOne = num - 1;
		if (numMinuxOne < 0) {
			numMinuxOne = num2;
		}

		if (direction) {
			if (knife[num]+1!=knife[num1]) {
				if (knife[num]+1 == n) {
					if (0==knife[num1]) {
						continue;
					}
					knife[num]=0;
				} else {
					knife[num]++;
				}
				cout << "input :" << input[knife[numMinuxOne]] << endl;
				cout << "knife :" << knife[numMinuxOne] << endl;
				tmp[num] -= input[knife[numMinuxOne]];
				tmp[numMinuxOne] += input[knife[numMinuxOne]]; 
			} 
		} else {
			if (knife[num]-1!=knife[num2]) {
				if (knife[num]-1 < 0) {
					if (n-1 == knife[num2]) {
						continue;
					}
					knife[num]=n-1;
				} else {
					knife[num]--;
				}
				tmp[num] += input[knife[num]];
				tmp[num2] -= input[knife[num]]; 
			} 
		}
		if (min < getMin(tmp)) {
			min = getMin(tmp);
			cout << "min " << min << endl;
		}
		cout << "---" << endl;
		cout << knife[0] << " " << knife[1] << " " << knife[2] << endl;
		cout << tmp[0] << " " << tmp[1] << " " << tmp[2] << endl;
		cout << "----> " << min << endl;
		cin >> hoge;
	}

	cout << min << "\n";
	return 0;
}

