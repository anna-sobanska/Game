#include <iostream>

void guessingGame();
void pseudoRandomNumbers();

int main() {
	std::cout << "Hello! Let's start the game" << std::endl;
	std::cout << "Select the game!" << std::endl;
	std::cout << "1. Guessing game" << std::endl;
	std::cout << "2. Random number guessing game" << std::endl;

	int choice;
	std::cin >> choice;

	system("cls");

	switch (choice)
	{
	case 1:
		guessingGame();
		break;
	case 2:
		pseudoRandomNumbers();
		break;
	default:
		std::cout << "It is not valid!";
		break;
	}

	system("pause>0");
}