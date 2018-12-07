#include <iostream>
using namespace std;

char ht[1<<25] = {};
char key[256];

int hashstr(char *str)
{
	int h = 1;
	while(*str) {
		h = (h<<2) + key[*str++];
	}
	return h;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	key['A']=0, key['C']=1, key['G']=2, key['T']=3; 
	int n, i, h;
	char com[8], str[13];
	cin >> n;

	for (i=0; i<n; i++) {
		cin >> com >> str;
		h = hashstr(str);
		if(com[0] == 'i') {
			ht[h] = 1;
		} else {
			if (ht[h] == 1) {
				cout << "yes\n";
			} else {
				cout << "no\n";
			}
		}
	}

	return 0;
}
