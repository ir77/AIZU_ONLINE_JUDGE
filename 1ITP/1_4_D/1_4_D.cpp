#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const* argv[])
{
	int n, a, m_max = -1000000, m_min = 1000000;
	long sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		m_max = max(a, m_max);
		m_min = min(a, m_min);
		sum += a;
	}
	cout << m_min << " " << m_max << " " << sum << endl;
	return 0;
}
