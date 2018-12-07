#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const* argv[])
{
	string s;
	while (cin >> s && s != "0") {
		int sum = 0;
		cout << s.size() << endl;
		for (int i=0; i<s.size(); i++) {
			sum += s[i] - '0';
		}
		cout << sum << endl;
	}
	return 0;
}

/*
int main(int argc, char const* argv[])
{
	static unsigned long long x;
	while (cin >> x && x != 0) {
		cout << "hoge" << endl;
		static int sum = 0;
		for (int i=(int)log10(x)+1; i>0; i--) {
			cout << i << endl;
			sum += x/(unsigned long long)pow(10,i-1);
			cout << sum << endl;
			x = x % (unsigned long long)pow(10,i-1);
			cout << x << endl;
		}
		cout << sum << endl;
	}
	return 0;
}*/
