#include "RPN.hpp"

RPN::RPN(const string &str)
{
	if (isValidArgument(str) == false)
		throw std::invalid_argument("Error");
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ')
			continue;
		if (isdigit(str[i]))
			m_stack.push((str[i] - '0'));
		else
		{
			int op2 = m_stack.top();
			m_stack.pop();
			int op1 = m_stack.top();
			m_stack.pop();
			switch (str[i])
			{
			case '+':
				m_stack.push(op1 + op2);
				break;
			case '-':
				m_stack.push(op1 - op2);
				break;
			case '*':
				m_stack.push(op1 * op2);
				break;
			case '/':
				m_stack.push(op1 / op2);
				break;
			}
		}
	}
}

bool	RPN::isValidArgument(const string &str)
{
	int count = 0;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (isdigit(str[i]))
			count++;
		else if (str[i] == ' ')
			;
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
		{
			if (count != 2)
				return false;
			count -= 1;
		}
		else
			return false;
	}
	if (count == 0)
		return false;
	return true;
}

void RPN::display()
{
	cout << "Result: " << m_stack.top() << endl;
}