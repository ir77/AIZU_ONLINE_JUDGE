#include <iostream>
#include <math.h>

using namespace std;

bool primeNumberChecker(unsigned int num){
	if (num==2) {
		return true;
	}
	if (num%2==0) {
		return false;
	}
	for (int j=3; j<=sqrt(num); j+=2) {
		if (num%j==0) {
			return false;
		}
	}
	return true;
}


int main(int argc, char const* argv[])
{
	unsigned int n, number[10000], ans=0;
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> number[i];
		if (primeNumberChecker(number[i])){
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
