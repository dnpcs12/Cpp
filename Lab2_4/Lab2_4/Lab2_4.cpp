// Lab2_4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

int main()
{
	double x = 0.0, y = 0.0;
	std::cout << "x 입력 : "; std::cin >> x;
	std::cout << "y 입력 : "; std::cin >> y;
	std::cout << sqrt(x) << "\n";
	std::cout << exp(x) << "\n";
	std::cout << log10(x) << "\n";
	std::cout << cos(x) << "\n";
	std::cout << pow(x,y) << "\n";
	std::cout << fabs(x) << "\n";
    return 0;
}

