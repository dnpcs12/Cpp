// Lab3_1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <typeinfo> 

int main()
{
	int number = 0;

	while (1) {
		std::cout << "number : "; std::cin >> number;
		if (number < 0) {
			std::cout << "비정상적인 입력입니다.\n";
			break;
			}
		if (number % 2 == 0) {
			std::cout << number << "은 짝수입니다.\n";
		}
		else {
			std::cout << number << "은 홀수입니다.\n";
		}
		

	}
    return 0;
}

