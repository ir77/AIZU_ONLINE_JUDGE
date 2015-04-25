#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const* argv[])
{
	int n;
	vector<string> DNA;
	cin >> n;
	for (int i=0; i<n; i++) {
		string command, str, preCommand="", preStr="";
		bool flag = false;
		cin >> command;
		cin >> str;
		if (command==preCommand && str==preStr) {
			if( flag ){
				cout << "yes" << endl;
			} else {
				cout << "no" << endl;
			}
			continue;
		}

		preCommand = command;
		preStr = str;

		if (command == "insert") {
			DNA.push_back(str);
		} else {
			vector<string>::iterator sIter = find( DNA.begin(),DNA.end() , str );
			if( sIter != DNA.end() ){
				cout << "yes" << endl;
				flag = true;
			} else {
				cout << "no" << endl;
				flag = false;
			}
		}
	}
	return 0;
}
