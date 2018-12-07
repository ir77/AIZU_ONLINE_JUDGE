#include <iostream>
using namespace std;
typedef long long ll;

ll getMin(ll a[3]) {
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
	int n;
	ll min = 0, max;
	cin >> n;
	ll a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	ll tmp[3] = {0};
	bool second = false;
	for (int i=1; i<n-1; i++) {
		if (second) {
			tmp[0] = tmp[0] + a[i-1];
			tmp[1] = 0;
			tmp[2] = max - tmp[1] - tmp[0];
		} 
		for (int j=i+1; j<n; j++) {
			if (second) {
				tmp[1] = tmp[1] + a[j-1];
				tmp[2] = 0;
				tmp[0] = max - tmp[2] - tmp[1];
			} 
			for (int k=j+1; k<=n; k++) {
				if (second) {
					tmp[0] = tmp[0] - a[k-1];
					tmp[2] = tmp[2] + a[k-1];
				} else {
					int m=0;
					for (int l=0; l<n; l++) {
						tmp[m] += a[l];
						if (l+1 == i) {
							m++;
						} else if (l+1 == j) {
							m++;
						} else if (l+1 == k) {
							m=0;
						}
					}
					max = tmp[0] + tmp[1] + tmp[2];
					second = true;
				}
				ll tmpMin = getMin(tmp);
				if (min < tmpMin) {
					min = tmpMin;
				}
			}
		}
	}
	cout << min << "\n";
	return 0;
}

