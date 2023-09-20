#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
void f()
{
	system("leaks Array");
}
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	// SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> tmp2 ;
		tmp2 = numbers;
		Array<int> test(tmp);
		std::cout << "tmp = " << tmp.size() << std::endl;
		std::cout << "tmp2 = " << tmp2.size() << std::endl;
		std::cout << "test = " << test.size() << std::endl;
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// for (int i = 0; i < MAX_VAL; i++)
	// {
	// 	numbers[i] = rand();
	// }
	// for (int i = 0; i < MAX_VAL; i++)
	// {
	//     std::cout << numbers[i] <<"\n";
	// }
	delete [] mirror;//
	atexit(f);
	return 0;
}