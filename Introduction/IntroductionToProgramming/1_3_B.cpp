#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int data[10000];
	int i;
	for (i=0 ;; i++) {
		cin >> data[i];
		if (data[i] == 0) {
			break;
		}
	} 

	for (int j=0; j<i; j++) {
		cout << "Case " << j+1 << ": " << data[j] << endl;
	}
	return 0;
}

