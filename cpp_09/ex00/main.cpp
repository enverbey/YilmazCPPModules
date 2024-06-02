#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		cerr << "\033[1;31mWrong argument number! " << endl;
		cerr << "Example argument\033[0m(>\033[1;33m./btc input.txt\033[0m)" << endl;
		return 1;
	}

	try {
		BitcoinExchange btc;
		btc.calculateBitcoinValues(argv[1]);
	}
	catch (const exception &e)
	{
		cerr << e.what() << endl;
	}
	return 0;
}