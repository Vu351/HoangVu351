#include <iostream>
#include<stack>
using namespace std;
bool checkproperly(string str) {
	stack<char> st;
	for (int i = 0; i < str.length(); ++i) {
		if (str[i] == '(' || str[i] == '{' || str[i] == '[')
			st.push(str[i]);
		else {
			if (st.empty())
				return false;
			if (str[i] == ')' && st.top() != '(')
				return false;
			if (str[i] == '}' && st.top() != '{')
				return false;
			if (str[i] == ']' && st.top() != '[')
				return false;
			st.pop();
		}
	}
	return st.empty(); 
}
int main()
{
	string str;
	cout << "enter string:";
	cin >> str;
	if (checkproperly(str))
		cout << "yes";
	else
		cout << "no";
}
