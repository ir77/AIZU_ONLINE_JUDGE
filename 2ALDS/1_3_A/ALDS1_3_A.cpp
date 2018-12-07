#include <iostream>
#include <string>
#include <stack>
#include <sstream>
using namespace std;

namespace patch
{
	template < typename T > std::string to_string( const T& n )
	{
		std::ostringstream stm;
		stm << n;
		return stm.str();
	}
}


string calcOperand (int num1, int num2, string ope) {
	// cout << num1 << " " << num2 << " " << ope << endl;
	if (ope == "+") {
		return patch::to_string(num1 + num2);
	} else	if (ope == "-") {
		return patch::to_string(num1 - num2);
	} else	if (ope == "*") {
		return patch::to_string(num1 * num2);
	} else	if (ope == "/") {
		return patch::to_string(num1 / num2);
	}

	return "error";
}

int checkOperand (string str) {
	if (str == "+") {
		return 1;
	} else if (str == "-") {
		return 1;
	} else if (str == "*") {
		return 1;
	} else if (str == "/") {
		return 1;
	}
	return 0;
}

string reversePoland(stack<string> stk) {
	stack<string> tmpStack; 
	int calcFlag = 0;

	while(stk.size() != 0 || tmpStack.size() != 1) {
		if (tmpStack.size() > 2 && !checkOperand(tmpStack.top())) {
			string strNum1 = tmpStack.top();
			int num1;
			std::istringstream ss(strNum1);
			ss >> num1;
			tmpStack.pop();
			if (!checkOperand(tmpStack.top())) {
				string strNum2 = tmpStack.top();
				int num2;
				std::istringstream ss(strNum2);
				ss >> num2;
				tmpStack.pop();
				string ope = tmpStack.top();
				tmpStack.pop();
				tmpStack.push(calcOperand(num1, num2, ope));
				continue;
			} else {
				tmpStack.push(strNum1);
			}
		}
		if (stk.size() > 0) {
			tmpStack.push(stk.top());
			stk.pop();
		}
	}
	return tmpStack.top();
}

int main(int argc, char const* argv[])
{
	stack<string> myStack; 
	string tmpStr;

	getline(cin,tmpStr);
	while(tmpStr.find(" ") != -1){
		int sp=tmpStr.find(" ");
		string main_command=tmpStr.substr(0,sp);
		myStack.push(main_command);
		tmpStr=tmpStr.substr(sp+1,tmpStr.length());
	}
	myStack.push(tmpStr);

	cout << reversePoland(myStack) << endl;
	return 0;
}
