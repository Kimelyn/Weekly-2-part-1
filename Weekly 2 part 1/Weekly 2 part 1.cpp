
#include <iostream>

int main()
{   //Task 1 (1. and 2.)
	int number = 1;
	while (number <= 100) {
		std::cout << number << " ";
		++number;
	}
	std::cout << std::endl;
	std::cout << " \n";

	for (int number = 1; number <= 100; ++number)
		std::cout << number << " ";
	std::cout << std::endl;
	std::cout << " \n";
	// Task 2
	for (int number = 100; number <= 100 && number > 0; --number)
		std::cout << number << " ";
	std::cout << std::endl;
	std::cout << " \n";

	// Task 3
	int num = 5;
	while (num <= 50) {
		if (num % 5 == 0) {
			std::cout << " " << num;
		}
		num++;
	}
	std::cout << std::endl;
	// Task 4
	int i = 5;
	for (i = 5; i <= 50; i++) {
		if (i % 5 == 0) {
			std::cout << " " << i;
		}
	}
	std::cout << std::endl;
	// Task 5
	int nu = 5;
	do {
		if (nu % 5 == 0) {
			std::cout << " " << nu;
		}
		nu++;
	} while (nu <= 50);
	std::cout << std::endl;
	return 0;
}