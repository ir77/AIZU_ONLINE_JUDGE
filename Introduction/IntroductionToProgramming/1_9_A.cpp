#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char const* argv[])
{
	int ans = 0;
	string W, T = "", tmp_T;
	cin >> W;
	while (cin >> tmp_T && tmp_T != "END_OF_TEXT") {
		for (int i=0; i<tmp_T.size(); i++) {
			T += tolower(tmp_T[i]);
		}
		if (T == W) {
			ans++;
		}
		T = "";
	}
	cout << ans << endl;
	return 0;
}
