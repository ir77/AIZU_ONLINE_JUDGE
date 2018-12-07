#include <iostream>
using namespace std;
int main(int argc, char const* argv[])
{
	string s1, s2, s3;
	cin >> s1 >> s2;
	s3 = s1 + s1;
	for (int i=0; i<s1.size()+s2.size()-1; i++){
		for (int j=0; j<s2.size(); j++) {
			if (s3[i+j] != s2[j]) {
				break;
			}
			if (j == s2.size()-1) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
	return 0;
}
