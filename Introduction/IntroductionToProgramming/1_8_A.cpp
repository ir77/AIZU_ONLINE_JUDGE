#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

char change(char in){
	if (in == ',' || in == '.') return in;
	if('A'<=in && in<='Z'){
		return in-('Z'-'z');
	} else if('a'<=in && in<='z'){
		return in+('Z'-'z');
	}
	return in;
}

int main(int argc, char const* argv[])
{
	string a;
	getline(cin, a);
	transform(a.begin(), a.end(), a.begin(), change);
	cout << a << endl;
	return 0;
}
