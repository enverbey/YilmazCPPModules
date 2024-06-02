#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <exception>
#include <sstream>

using std::cout;
using std::endl;
using std::exception;
using std::cerr;
using std::map;
using std::string;
using std::ifstream;
using std::stringstream;
class BitcoinExchange
{
public:
	// Orthodox Canonical Form
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &rhs); // rhs : right hand side
	BitcoinExchange &operator=(const BitcoinExchange &rhs); // rhs : right hand side
	~BitcoinExchange();

	// Member Functions
	void calculateBitcoinValues(const string &filename);
		//trim fonksiyonları
	string ltrim(const std::string &s);
	string rtrim(const std::string &s);
	string trim(const std::string &s);
		//is valid fonksiyonları
	bool	isDateValid(const string &date);
	bool	isValueValid(const string &value);
	bool	checkInputFormat(const string &date, const string &value);
	bool	checkDateSpesific(int year, int month, int day);
private:
	void getData();
	map<string, float> m_bitcoinValues; // std::map<string, float> olarak tanımlandı
};

#endif
