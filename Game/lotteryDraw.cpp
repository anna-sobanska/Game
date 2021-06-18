#include <iostream>
#include <windows.h>

void lotteryGame() {
	int lotteryNumber;

	std::cout << "Wellcome to the lottery. The game will start in a moment... Let's draw numbers from 1 to 49!" << std::endl;
	Sleep(3000);
	srand(time(NULL));

	for (int i = 1; i <= 6; i++) {
		lotteryNumber = rand() % 49 + 1;
		Sleep(2000);
		std::cout << lotteryNumber << "\a" << std::endl;
	}


}