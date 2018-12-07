#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int h, m, s, S;
	cin >> S;
	h = S/(60*60);
	m = (S%(60*60)) / 60;
	s = (S%(60*60)) % 60;
	cout << h << ":" << m << ":" << s << endl;
	return 0;
}
