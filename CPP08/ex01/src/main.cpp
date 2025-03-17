#include "Span.hpp"

int main(){
	srand(static_cast<unsigned int>(time(0)));

	std::cout << std::endl;

	std::cout << "Test1-----------------------------" << std::endl;
	Span sp = Span(5);
	sp.addNumber(1);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(2);
	for (size_t i = 0; i < 5; ++i) {
    	std::cout << sp.getVector().at(i) << " ";
	}
	std::cout << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;

	std::cout << "Test2-----------------------------" << std::endl;
	unsigned int N = 10;
	Span a(N);

	for (unsigned int i = 0; i < N; i++)
	{
		a.addNumber(rand() % 10000 + 1);
	}
	for (size_t i = 0; i < N; ++i) {
    	std::cout << a.getVector().at(i) << " ";
	}
	std::cout << std::endl;
	std::cout << a.shortestSpan() << std::endl;
	std::cout << a.longestSpan() << std::endl;

	std::cout << std::endl;
	std::cout << "Test3-----------------------------" << std::endl;

	Span c = a;
	for (size_t i = 0; i < N; ++i) {
    	std::cout << c.getVector().at(i) << " ";
	}
	std::cout << std::endl;
	std::cout << a.shortestSpan() << std::endl;
	std::cout << a.longestSpan() << std::endl;

	std::cout << std::endl;

	std::cout << "Test4-----------------------------" << std::endl;

	unsigned int LOL = 15;
	Span d(LOL);

	for (unsigned int i = 0; i < 11; i++)
	{
		d.addNumber(rand() % 10000 + 1);
	}
	std::vector<int> numbersToAdd;
	numbersToAdd.push_back(2);
	numbersToAdd.push_back(7);
	numbersToAdd.push_back(4);
	numbersToAdd.push_back(9878656);
	d.addNumbers(numbersToAdd.begin(), numbersToAdd.end());
	for (size_t i = 0; i < LOL; ++i) {
    	std::cout << d.getVector().at(i) << " ";
	}
	std::cout << std::endl;
	std::cout << d.shortestSpan() << std::endl;
	std::cout << d.longestSpan() << std::endl;
		std::cout << std::endl;

	std::cout << "Test5-----------------------------" << std::endl;
	unsigned int M = 10000;
	Span b(M);
	try
	{
		for (unsigned int i = 0; i < M; i++)
		{
			b.addNumber(rand());
		}
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;		}
	std::cout << b.shortestSpan() << std::endl;
	std::cout << b.longestSpan() << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << std::endl;
}