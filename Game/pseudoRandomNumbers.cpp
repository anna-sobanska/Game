#include <iostream>
#include <cstdlib>
#include <time.h>



void pseudoRandomNumbers() {
	int number, userNumber = -1, attempt=0;

	std::cout << "Hello, try guess a number from 1 to 100!" << std::endl;
	srand(time(NULL));
	number = rand() % 100 + 1;
	

	while (number != userNumber) {

		attempt++;

		std::cout << "This is your " <<attempt<<" attempt. Select a number: " << std::endl;
		std::cin >> userNumber;

		if (number == userNumber)
			std::cout << "You win in a " << attempt <<" attempt!" << std::endl;
		else if (number < userNumber)
			std::cout << "This is too much!" << std::endl << std::endl;
		else if (number > userNumber)
			std::cout << "This is to less!" << std::endl << std::endl;
	}
}