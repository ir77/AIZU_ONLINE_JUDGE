#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const* argv[])
{
	int n, q, answer = 0;
	cin >> n;
	int S[n];
	for (int i=0; i<n; i++) {
		cin >> S[i];
	}

	cin >> q;
	for (int i=0; i<q; i++) {
		int T;
		cin >> T;
		int *p = std::find (S, S+n, T);
		if (p != S+n){
			answer++;
		}
	}
	cout << answer << "\n";

	return 0;
}
