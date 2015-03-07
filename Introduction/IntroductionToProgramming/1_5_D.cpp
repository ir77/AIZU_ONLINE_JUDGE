#include <iostream>
using namespace std;

void call(int n){
	for (int i=1; i<=n; i++) {
		int x = i;

		if ( x % 3 == 0 ){
			cout << " " << i;
		} else if ( x % 10 == 3 ){
			cout << " " << i;
		} else {
			while (1) { 
				x /= 10;
				if (x) {
					if ( x % 10 == 3 ){
						cout << " " << i;
						break;
					}
				} else {
					break;
				}
			}
		}
	
	}
	cout << endl;
}

int main(int argc, char const* argv[])
{
	int n;
	cin >> n;
	call (n);
	return 0;
}
