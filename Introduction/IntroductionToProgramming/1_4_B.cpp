#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int a, b;
	string op;

	while (1) { 
		cin >> a >> op >> b;
		if (op == "+") {
			cout << a + b << endl;
		} else 
		if (op == "-") {
			cout << a - b << endl;
		} else 
		if (op == "*") {
			cout << a * b << endl;
		} else 
		if (op == "/") {
			cout << a / b << endl;
		} else {
			break;
		}
	}

	return 0;
}
