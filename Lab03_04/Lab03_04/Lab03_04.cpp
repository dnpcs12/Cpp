// Lab03_04.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int dan = 0;
	while (1) {
		std::cout << "number : "; std::cin >> dan;
		if (dan >= 1 && dan < 10) {
			for (int i = 1; i <= 9; i++) {
				std::cout << dan << "*" << i << " = " << dan * i << "  ";
			}
			std::cout << "\n";
		}
		else
		{ 
			std::cout << "잘못된 입력입니다.\n";
			break;
		}
		
	}

	
    return 0;
}

