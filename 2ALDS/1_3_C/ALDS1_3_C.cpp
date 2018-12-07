#include <iostream>
#include <list>
#include <string>
#include<algorithm>
using namespace std;

std::list<int> intList;

void insertFirst(int num) {
	intList.push_front(num);
}

void deleteNum(int num) {
	/*
	for(std::list<int>::iterator itr = intList.begin(); itr != intList.end(); *itr++) {
		if (*itr == num) {
			intList.erase(itr);
			break;
		}
	}*/

	std::list<int>::iterator itr = find(intList.begin(),intList.end(), num);
	if(itr != intList.end()) {
		intList.erase(itr);
	}
}

void deleteFirst() {
	intList.pop_front();
}

void deleteLast() {
	intList.pop_back();
}

int main(int argc, char const* argv[])
{
	ios::sync_with_stdio(false); 
	int n;
	cin >> n;
	for (int i=0; i<n; i++) {
		int inputNum;
		string command;
		cin >> command;
		if (command == "insert") {
			cin >> inputNum;
			insertFirst(inputNum);
		} else if (command == "delete") {
			cin >> inputNum;
			deleteNum(inputNum);
		} else if (command == "deleteFirst") {
			deleteFirst();
		} else if (command == "deleteLast") {
			deleteLast();
		}
	}

	for(std::list<int>::iterator itr = intList.begin(); itr != intList.end(); *itr++) {
		cout << *itr;
		if (itr == --intList.end()) {
			cout << "\n";
		} else {
			cout << " ";
		}
	}
	return 0;
}
