#include "MutantStack.hpp"
#include <cstdlib>
#include <ctime>

int main(){
	std::cout << "Test1-----------------------------" << std::endl;
	
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	
	std::cout << "Test2-----------------------------" << std::endl;
	
	MutantStack<int> random;

	srand(static_cast<unsigned int>(time(0)));

	for (int i = 0; i < 100; i++){
		random.push(rand() % 1000);
	}
	MutantStack<int>::iterator iter = random.begin();
	MutantStack<int>::iterator itera = random.end();
	while (iter != itera)
	{
		std::cout << *iter << std::endl;
		++iter;
	}
		
	std::cout << "Test3-----------------------------" << std::endl;
	
	MutantStack<int> empty;

	MutantStack<int>::iterator iterat = empty.begin();
	MutantStack<int>::iterator iterato = empty.end();
	while (iterat != iterato)
	{
		std::cout << *iterat << std::endl;
		++iterat;
	}
	return 0;
}