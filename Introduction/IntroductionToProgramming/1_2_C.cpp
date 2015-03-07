#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int x, y, z;
	cin >> x >> y >> z;

	int minNumber = min(x,min(y, z));
	int maxNumber = max(x,max(y, z));
	
	cout << minNumber << " " << x+y+z-minNumber-maxNumber << " " << maxNumber << endl; 

	return 0;
}

/*
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int a[3];
	cin >> a[0] >> a[1] >> a[2];

	for (int i=0; i<2; i++) {
		for (int j=0; j<2; j++) {
			if ( a[j] > a[j+1] ) {
				int tmp = a[j+1];
				a[j+1] = a[j];
				a[j] = tmp;
			}
		}
	}

	cout << a[0] << " " << a[1] << " " << a[2] << endl;

	return 0;
}
*/
