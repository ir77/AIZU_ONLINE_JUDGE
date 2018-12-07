#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int H, W;
	while ((cin >> H >> W) && (H || W)) {
		for (int i=0; i<H; i++) {
			for (int j=0; j<W; j++) {
				if ((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0)) {
					cout << "#";
				} else {
					cout << ".";
				}
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
