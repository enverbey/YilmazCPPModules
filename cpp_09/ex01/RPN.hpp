#ifndef RPN_HPP
# define RPN_HPP
#include <iostream>
#include <stack>
#include <string>
#include <exception>

using std::cout;
using std::endl;
using std::string;
using std::stack;
using std::cerr;
using std::exception;
class RPN
{
public:
	// Orthodox Canonical Form
	RPN(const string &str);
	// RPN(const RPN &rhs);
	// RPN &operator=(const RPN &rhs);
	// ~RPN();

	// Member Functions
	bool	isValidArgument(const string &str);
	void	display();

private:
	stack<int>	m_stack;
};


#endif