#include <iostream>
#include <vector>
using namespace std;

vector<int> height;
vector<int> waterVolume;
vector<int> waterPlace;

int getEqualHeightPlace (int start) {
	int i = start;
	int j = i - 2;
	while (j>=0) {
		if (height[i] == height[j]) {
			return j;
		}
		j--;
	}
	return -1;
}

void searchBeforeWaterPlace (int heightPlace) {
	int size = waterPlace.size();
	for (int i = size-1; i>=0; i--) {
		if (waterPlace[i] >= heightPlace) {
			waterVolume.pop_back();
			waterPlace.pop_back();
		} else {
			return;
		}
	}
}

void checker (int size) {
	for (int i=1; i<=size; i++) {
		if (height[i] > height[i-1]) {
			int eHeight = getEqualHeightPlace(i);
			if (eHeight != -1) {
				double volume = 0;
				for (int k=eHeight+1; k<=i; k++) {
					if (height[k] - height[k-1] == -1) {
						volume += 0.5;
						volume += (height[eHeight] - height[k])-1;
					} else if (height[k] - height[k-1] == 0) {
						volume += height[eHeight] - height[k];
					} else {
						volume += 0.5;
						volume += (height[eHeight]- height[k]);
					}
				}
				searchBeforeWaterPlace(eHeight);
				waterVolume.push_back(volume);
				waterPlace.push_back(eHeight);
			}
		}
	}
}

void output(){
	int volumeAll = 0;
	for (int i=0; i<waterVolume.size(); i++) {
		volumeAll += waterVolume[i];
	}
	cout << volumeAll << endl;
	cout << waterVolume.size();
	if (waterVolume.size()>0) {
		cout << " ";
	} else {
		cout << endl;
	}
	for (int i=0; i<waterVolume.size(); i++) {
		cout << waterVolume[i];
		if (i == waterVolume.size()-1) {
			cout << endl;
		} else {
			cout << " ";
		}
	}
}

int main(int argc, char const* argv[])
{
	ios::sync_with_stdio(false); 
	string line;
	cin >> line;
	height.push_back(0);
	for (int i=0; i<line.size(); i++) {
		if (line[i] == '/') {
			height.push_back(height[i] + 1);
		} else if (line[i] == '_') {
			height.push_back(height[i]);
		} else {
			height.push_back(height[i] - 1);
		}
	}
	checker (line.size());
	output();
	return 0;
}
