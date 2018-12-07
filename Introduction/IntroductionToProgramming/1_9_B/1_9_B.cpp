#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const* argv[])
{
	string str;
	int numberOfH;
	while (cin >> str &&  str != "-") {
		cin >> numberOfH;
		for (int i=0; i<numberOfH; i++) {
			int h;
			cin >> h;
			string tmpStr = str.substr(0, h);
			str = str.substr(h, str.size());
			str += tmpStr;
		}
		cout << str << endl;
	}
	return 0;
}
