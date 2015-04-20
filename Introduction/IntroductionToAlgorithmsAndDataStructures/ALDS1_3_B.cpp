#include <iostream>
#include <queue>
using namespace std;

void roundRobinScheduling(int q, queue<string> name, queue<int> time){
	int timeSpend = 0;
	while (name.size() > 0) {
		if (q - time.front() >= 0) {
			timeSpend += time.front();
			cout << name.front() << " " << timeSpend << endl;
		} else {
			name.push(name.front());
			time.push(time.front() - q);
			timeSpend += q;
		}
		name.pop();
		time.pop();
	}
}

int main(int argc, char const* argv[])
{
	int n, q;
	cin >> n >> q;
	queue<string> name;
	queue<int> time;
	for (int i=0; i<n; i++) {
		string tmp_name;
		int tmp_time;
		cin >> tmp_name;
		cin >> tmp_time;
		name.push(tmp_name);
		time.push(tmp_time);
	}
	roundRobinScheduling(q, name, time);

	return 0;
}
