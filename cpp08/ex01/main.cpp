#include "Span.hpp"

void pressEnter(){
	cout << endl << "press ENTER to constinue" << endl;
	cin.ignore();
	cout << "\033c";
}

int main()
{
	cout << "\033c";
	{//exception testes
	Span sp(1);

	try{
		int res = sp.shortestSpan();
	}catch(exception& e){
		cout << e.what() << endl;
	}

	try{
		int res = sp.longestSpan();
	}catch(exception& e){
		cout << e.what() << endl;
	}

	try{
		sp.addNumber(10);
		sp.addNumber(10);
	}catch(exception& e){
		cout << e.what() << endl;
	}
	pressEnter();
	}

	Span sp(10);

	sp.fillRandomly();
	sp.printSpanNumber();

	cout << "Shortes : " << sp.shortestSpan() << endl;
	cout << "Longest : " << sp.longestSpan() << endl;
	pressEnter();

	Span sp2(sp);
	Span sp3 = sp2;
	sp2.printSpanNumber();
	sp3.printSpanNumber();
	pressEnter();

	std::vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);
	sp3.setSize(15);
	sp3.addRange(numbers);
	sp3.printSpanNumber();
	pressEnter();


	Span sp5(10);
	sp5.addRange(numbers.begin(), numbers.end());
	sp5.printSpanNumber();
	pressEnter();
}