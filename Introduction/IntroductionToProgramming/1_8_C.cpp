#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	string s;
	int count[26] = {};
	
	while(getline(cin, s) && s[s.size()]!=istream::traits_type::eof()) {
		for (int i=0; i<s.size(); i++) {
			if ('A' <= s[i] && s[i] <= 'Z') {
				count[s[i]-'A']++;
			} else if ('a' <= s[i] && s[i] <= 'z') {
				count[s[i]-'a']++;
			}
		}
	}
	for (int i=0; i<sizeof(count)/sizeof(count[0]); i++) {
		cout << (char)(i+'a') << " : " << count[i] << endl;
	}
	
	return 0;
}
