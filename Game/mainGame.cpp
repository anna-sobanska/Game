#include <iostream>
#include <windows.h>
#include <time.h>

void guessingGame();
void pseudoRandomNumbers();
void lotteryGame();

int main() 
{
	std::cout << "Hello! Let's start the game" << std::endl;
	std::cout << "Select the game!" << std::endl;
	std::cout << "1. Play with the host!" << std::endl;
	std::cout << "2. Guess random number!" << std::endl;
	std::cout << "3. Draw 6 random numbers!" << std::endl;

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
	case 3:
		lotteryGame();
		break;
	default:
		std::cout << "It is not valid!";
		break;
	}

	system("pause>0");
}

void guessingGame() 
{
	int hostUserNum, guestUserNum;
	std::cout << "Host: ";
	std::cin >> hostUserNum;
	system("cls");
	std::cout << "Guest: ";
	std::cin >> guestUserNum;

	(hostUserNum == guestUserNum) ? std::cout << "Correct!" : std::cout << "Failed!";
}

void pseudoRandomNumbers() 
{
	int number, userNumber = -1, attempt = 0;

	std::cout << "Hello, try guess a number from 1 to 100!" << std::endl;
	srand(time(NULL));
	number = rand() % 100 + 1;


	while (number != userNumber) 
	{

		attempt++;

		std::cout << "This is your " << attempt << " attempt. Select a number: " << std::endl;
		std::cin >> userNumber;

		if (number == userNumber)
			std::cout << "You win in a " << attempt << " attempt!" << std::endl;
		else if (number < userNumber)
			std::cout << "This is too much!" << std::endl << std::endl;
		else if (number > userNumber)
			std::cout << "This is to less!" << std::endl << std::endl;
	}
}

void lotteryGame() 
{
	int lotteryNumber;

	std::cout << "Wellcome to the lottery. The game will start in a moment... Let's draw numbers from 1 to 49!" << std::endl;
	Sleep(3000);
	srand(time(NULL));

	for (int i = 1; i <= 6; i++) 
	{
		lotteryNumber = rand() % 49 + 1;
		Sleep(2000);
		std::cout << lotteryNumber << "\a" << std::endl;
	}


}