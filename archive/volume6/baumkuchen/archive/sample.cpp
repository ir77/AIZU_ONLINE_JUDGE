#include <iostream>
using namespace std;
typedef long long ll;

int main(int argc, char const* argv[])
{
	ll N;
	cin >> N;
	ll input[N], sum[N];
	sum[0] = 0;
  for (int i = 1; i <= N; i++) {
		cin >> input[i];
		sum[i] = sum[i - 1] + input[i];
	}
	ll knife[3] = {1, 2, 3};
	ll answer = -1;


	cout << endl;
	return 0;
}
