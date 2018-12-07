#include <iostream>
#include <string>
using namespace std;

int main () {
	string str, command;
	cin >> str;

	int q, a, b;
	cin >> q;

	for (int i=0; i<q; i++) {
		cin >> command;
		cin >> a >> b;
		
		if (command == "replace") {
			string tmp;
			cin >> tmp;
			str.replace(a, b-a+1, tmp);
		} else if (command == "reverse") {
			for (int j=b; j>a; j--) {
				str.insert(str.begin()+j+1, str[a]);
				str.erase(str.begin()+a);
			}
		} else if (command == "print"){
			for (int j=a; j<=b; j++) {
				cout << str[j];
			}
			cout << endl;
		}
	}
  return 0;
}
