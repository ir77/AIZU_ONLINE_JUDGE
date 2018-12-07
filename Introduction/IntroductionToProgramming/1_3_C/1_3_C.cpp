#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const* argv[])
{
	int data_x[10000], data_y[10000];
	int i;
	for (i=0 ;; i++) {
		cin >> data_x[i] >> data_y[i];
		if (data_x[i] == 0 && data_y[i] == 0) {
			break;
		}
	} 

	for (int j=0; j<i; j++) {
		cout << min(data_x[j], data_y[j]) << " " << max(data_x[j], data_y[j]) << endl;
	}
	return 0;
}

