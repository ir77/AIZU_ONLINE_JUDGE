#include <iostream>
#include <cmath>

using namespace std;

int cnt;

void insertionSort(int *A, int n, int g) {
	for (int i = g; i<n; i++) {
		int v = A[i];
		int j = i - g;
		while (j >= 0 && A[j] > v) {
			A[j+g] = A[j];
			j = j - g;
			cnt++;
		}
		A[j+g] = v;
	}
}

void shellSort(int *A, int n) {
	cnt = 0;
	int m = 1, m_count, h_tmp;
	for(h_tmp = 1, m_count = 1; h_tmp * 3 + 1 < n; h_tmp = m){
		m = h_tmp * 3 + 1;
		m_count++;
	}
	cout << m_count << endl;

	cout << m;
	while( m > 0 ){
		insertionSort(A, n, m);
		m /= 3;
		if (m > 0) {
			cout << " ";
			cout << m;
		}
	}
	cout << endl;
}

int main(int argc, char const* argv[])
{
	int n;
	cin >> n;
	int array[n];
	for (int i=0; i<n; i++) {
		cin >> array[i];
	}
	shellSort(array, n);
	
	cout << cnt << endl;
	for (int i=0; i<n; i++) {
		cout << array[i] << endl;
	}
	return 0;
}
