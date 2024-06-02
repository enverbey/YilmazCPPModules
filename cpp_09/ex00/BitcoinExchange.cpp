#include "BitcoinExchange.hpp"

//Orthodox Canonical Form
BitcoinExchange::BitcoinExchange(){getData();}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &rhs){*this = rhs;}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
		this->m_bitcoinValues = rhs.m_bitcoinValues;
	return *this;
}
BitcoinExchange::~BitcoinExchange(){}

// Member Functions
void BitcoinExchange::getData()
{
	ifstream	file("data.csv");
	string		date;
	string		value;
	string		line;
	size_t		i;
	float		f;

	if (!file.is_open())
		throw std::runtime_error("File could not be opened!");
	getline(file, line);
	if (line != "date,exchange_rate")
		throw std::runtime_error("File format is not correct!");
	while (getline(file, line))
	{
		i = line.find(",");
		if (i == string::npos)
			throw std::runtime_error("File format is not correct!");
		date = line.substr(0, i);
		value = line.substr(i + 1);
		stringstream ss(value);
		ss >> f;
		this->m_bitcoinValues[date] = f; // std::unordered_map kullanarak veri ekleme, stof :: string to float
	}
}

void BitcoinExchange::calculateBitcoinValues(const string &filename){
	ifstream	file(filename.c_str()); // c_str() fonksiyonu stringi const char *'a çevirir
	string		date;
	string		value;
	string		line;
	size_t			i;

	if (!file.is_open())
		throw std::runtime_error("File could not be opened!");
	getline(file, line);
	if (line != "date | value")
		throw std::runtime_error("File format is not correct!");
	while (getline(file, line))
	{
		i = line.find("|");
		if (i == string::npos){cout << "Error: bad input => " << line << endl; continue;} // | işareti olmayan satırlar için hata mesajı
		
		date = trim(line.substr(0, i));
		if (date.length() == 0){cout << "Error: bad input => " << line << endl; continue;} // tarihi olmayan satırlar için hata mesajı

		value = trim(line.substr(i + 1));
		if (value.length() == 0){cout << "Error: bad input => " << line << endl; continue;} // değeri olmayan satırlar için hata mesajı

		if (!checkInputFormat(date, value))
			continue;

		map<string, float>::iterator it = m_bitcoinValues.find(date);
		if (it == m_bitcoinValues.end()) {
			it = m_bitcoinValues.lower_bound(date);
			if (it != m_bitcoinValues.begin()) {
				--it;
			} else {
				cout << "Error: no valid date found for " << date << endl;
				continue;
			}
		}
		stringstream ss(value);
		double val;
		ss >> val;
		float valueAtDate = it->second;
		cout << date << " => " << value << " = " << (val*valueAtDate) << endl;
		//cout << "Value on " << date << ": " << valueAtDate << endl;
	}
	file.close();
}


string BitcoinExchange::ltrim(const std::string &s) {
	size_t start = s.find_first_not_of(" \t\n\r\f\v");

	if (start == std::string::npos)
		return "";
	return s.substr(start);
}
string BitcoinExchange::rtrim(const std::string &s) {
	size_t end = s.find_last_not_of(" \t\n\r\f\v");

	if (end == std::string::npos)
		return "";
	return s.substr(0, end + 1);
}
string BitcoinExchange::trim(const std::string &s) {
	return rtrim(ltrim(s));
}

bool	BitcoinExchange::isDateValid(const string &date)
{
	int year, month, day;
	char sp1, sp2;

	if (date.length() != 10)
	{cout << "Error: bad input => " << date << endl; return false;}

	if (date.find_first_not_of("0123456789-") != string::npos)
	{cout << "Error: bad input => " << date << endl; return false;}

	stringstream ss(date);
	ss >> year >> sp1 >> month >> sp2 >> day;

	if (ss.fail() || sp1 != '-' || sp2 != '-' || year < 2009 || month < 1 || month > 12 || day < 1 || day > 31)
	{cout << "Error: bad input => " << date << endl; return false;}

	if (!checkDateSpesific(year, month, day))
	{cout << "Error: bad input => " << date << endl; return false;}

	return true;
}
bool	BitcoinExchange::isValueValid(const string &value)
{
	if (value.find_first_not_of("0123456789.-+") != string::npos)
	{cout << "Error: bad input => " << value << endl; return false;}

	stringstream ss(value);
	double val;
	ss >> val;
	if (ss.fail() || !ss.eof())
	{cout << "Error: bad input => " << value << endl; return false;}

	if (val < 0)
	{cout << "Error: not a positive number." << endl; return false;}

	if (val > 1000)
	{cout << "Error: too large a number." << endl; return false;}

	return true;
}
bool	BitcoinExchange::checkInputFormat(const string &date, const string &value)
{
	return (isValueValid(value) && isDateValid(date));
}
bool	BitcoinExchange::checkDateSpesific(int year, int month, int day)
{
	bool leap_year = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

	if ((month == 2 && (leap_year ? day > 29 : day > 28)))
		return false;
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return false;
	return true;
}
