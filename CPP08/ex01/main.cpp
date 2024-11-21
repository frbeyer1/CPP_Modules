#include "Span.hpp"

int main(){
	std::cout << "----------------------------------" << std::endl;
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

	std::cout << "----------------------------------" << std::endl;
	unsigned int N = 10;
	Span a(N);

	for (unsigned int i = 0; i < N; i++)
	{
		a.addNumber(rand() % 10000 + 1);
	}
	std::cout << a.shortestSpan() << std::endl;
	std::cout << a.longestSpan() << std::endl;
	for (size_t i = 0; i < N; ++i) {
    	std::cout << a.getVector().at(i) << " ";
	}

	std::cout << std::endl;
	std::cout << "----------------------------------" << std::endl;
	Span c = a;
	for (size_t i = 0; i < N; ++i) {
    	std::cout << c.getVector().at(i) << " ";
	}
	std::cout << std::endl;
	std::cout << a.shortestSpan() << std::endl;
	std::cout << a.longestSpan() << std::endl;

	std::cout << "----------------------------------" << std::endl;
	unsigned int M = 10000;
	Span b(M);

	for (unsigned int i = 0; i < M; i++)
	{
		b.addNumber(rand());
		// try
		// {
		// 	b.addNumber(rand());
		// }
		// catch (std::exception &e){
		// 	std::cout << e.what() << std::endl;		}
	}
	std::cout << b.shortestSpan() << std::endl;
	std::cout << b.longestSpan() << std::endl;
	std::cout << "----------------------------------" << std::endl;
	// for (size_t i = 0; i < N; ++i) {
    // 	std::cout << a.getVector().at(i) << " ";
	// }
	// delete a;
}