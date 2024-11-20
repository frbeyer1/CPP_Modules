#include "easyfind.hpp"
#include "vector"

int main(){
	std::vector<int> v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	try
	{
		std::cout << *easyfind(v, 5) << std::endl;
		std::cout << *easyfind(v, 20) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}