#include <iostream>

void guessingGame() {
	int hostUserNum, guestUserNum;
	std::cout << "Host: ";
	std::cin >> hostUserNum;
	system("cls");
	std::cout << "Guest: ";
	std::cin >> guestUserNum;

	(hostUserNum == guestUserNum) ? std::cout << "Correct!" : std::cout << "Failed!";
}