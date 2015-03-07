#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int n, taroPoint=0, hanakoPoint=0;
	string taroStr, hanakoStr;
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> taroStr >> hanakoStr;
		for (int j=0; j<taroStr.size(); j++) {
			if (taroStr[j] == hanakoStr[j]) {
				if (j != taroStr.size()-1) continue;
				else if (taroStr.size() < hanakoStr.size()) hanakoPoint += 3;
				else if (taroStr.size() > hanakoStr.size()) taroPoint += 3;
				else {
					taroPoint++;
					hanakoPoint++;
				}
			} else if (taroStr[j] < hanakoStr[j]) {
				hanakoPoint += 3;
				break;
			} else {
				taroPoint += 3;
				break;
			}
		}
	}
	cout << taroPoint << " " << hanakoPoint << endl;
	return 0;
}
