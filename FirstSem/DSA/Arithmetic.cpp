/*
#include <bits/stdc++.h>
using namespace std;

int evaluatePostfix(string exp)
{
	stack<int> st;
	for (int i = 0; i < exp.size(); ++i)
	{
		if (isdigit(exp[i]))
		{
			st.push(exp[i] - '0');
		}
		else
		{
			int val1 = st.top();
			st.pop();
			int val2 = st.top();
			st.pop();
			switch (exp[i])
			{
			case '+':
				st.push(val2 + val1);
				break;
			case '-':
				st.push(val2 - val1);
				break;
			case '*':
				st.push(val2 * val1);
				break;
			case '/':
				st.push(val2 / val1);
				break;
			}
		}
	}
	return st.top();
}

int main()
{
	string exp = "23-4+567*+*";
	int Answer = evaluatePostfix(exp);
	cout << Answer;
}
*/
// //////////////////////////////////////////////////
#include <iostream>
#include <stack>
using namespace std;

int evaluatePostfix(string exp)
{
	stack<int> st;
	for (int i = 0; i < exp.size(); ++i)
	{
		if (isdigit(exp[i]))
		{
			st.push(exp[i] - '0');
		}
		else
		{
			int val1 = st.top();
			st.pop();
			int val2 = st.top();
			st.pop();

			switch (exp[i])
			{
			case '+':
				st.push(val2 + val1);
				break;
			case '-':
				st.push(val2 - val1);
				break;
			case '*':
				st.push(val2 * val1);
				break;
			case '/':
				st.push(val2 / val1);
				break;
			}
		}
	}
	return st.top();
}

int main()
{
	string exp;
	cout << "Enter the postfix expression: ";
	cin >> exp;

	int result = evaluatePostfix(exp);

	cout << "Result: " << result << endl;
}
