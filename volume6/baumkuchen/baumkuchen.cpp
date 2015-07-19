#include <iostream>
using namespace std;
typedef long long ll;

int searchMinimumSum(ll sum[]) {
	if (sum[0] <= sum[1] && sum[0] <= sum[2]) {
		return 0;
	} else if (sum[1] <= sum[0] && sum[1] <= sum[2]) {
		return 1;
	}
	return 2;
}

void update(ll N, ll A[], ll sum[], ll knife[], int minID) {
		sum[minID] += A[knife[(minID+1)%3]];
		sum[(minID+1)%3] -= A[knife[(minID+1)%3]];
		knife[(minID+1)%3]++;
		if (knife[(minID+1)%3] == N) {
			knife[(minID+1)%3] = 0;
	 	}
}

int main(int argc, char const* argv[])
{
	ll N, ans = -1, counter = 0;
	cin >> N;
	ll A[N], sum[3] = {0}, knife[3] = {0, 1, 2};
	for (int i=0; i<N; i++) {
		cin >> A[i];
		if (i==0) {
			sum[0] = A[0];
		} else if (i==1) {
			sum[1] = A[1];
		} else {
			sum[2] += A[i];
		}
	}
	while (counter < N) {
		int minID = searchMinimumSum(sum);
		if (ans < sum[minID]) {
			ans = sum[minID];
		}
		update(N, A, sum, knife, minID);
		if (minID == 2) {
			counter++;
		}
	}
	cout << ans << "\n";

	return 0;
}
