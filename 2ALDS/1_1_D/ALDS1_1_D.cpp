#include <iostream>
using namespace std;

int tmpMaxnumber;

long int maxDiff(long int rate[200000], long int n, long int smallPoint, long int smallNumber) {
	int max;
	if (tmpMaxnumber < smallPoint+1) {
		tmpMaxnumber = smallPoint+1;
	} else {
		max = rate[tmpMaxnumber] - smallNumber;
		return max;
	}
	if (smallPoint+1 < n) {
		max = rate[smallPoint+1] - smallNumber;
	}
	for (int i=smallPoint+2; i<n; i++) {
		if ((rate[i] - smallNumber) > max) {
			max = rate[i] - smallNumber;
			tmpMaxnumber = i;
		}
	}
	return max;
}

int main(int argc, char const* argv[])
{
	long int n, max, rate[200000];
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> rate[i];
	}
	max = maxDiff(rate, n, 0, rate[0]);
	for (int i=1; i<n; i++) {
		if (max < maxDiff(rate, n, i, rate[i])) {
			max = maxDiff(rate, n, i, rate[i]);
		}
	}
	cout << max << endl;
	return 0;
}
