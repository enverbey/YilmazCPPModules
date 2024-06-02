#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		cerr << "\033[1;31mWrong argument number! " << endl;
		cerr << "Example argument\033[0m($>\033[1;33m./RPN \"8 9 * 9 - 9 - 9 - 4 - 1 +\"\033[0m)" << endl;
		return 1;
	}

	try {
		RPN rpn(argv[1]);
		rpn.display();
	}
	catch (const exception &e)
	{
		cerr << e.what() << endl;
	}

	return 0;
}