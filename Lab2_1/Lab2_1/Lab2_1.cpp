// Lab2_1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int sum(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mult(int x, int y) {
	return x * y;
}
double idiv(int x, int y) {
	double dx = x;
	double dy = y;

	return dx / dy;
	//return (float)x / (float)y;
}

int main()
{
	int x,y;
	
	std::cout << "x 입력 : "; std::cin >> x;
	std::cout << "y 입력 : "; std::cin >> y;
	std::cout << "x + y = " << sum(x, y) << "\n";
	std::cout << "x - y = " << sub(x, y) << "\n";
	std::cout << "x * y = " << mult(x, y) << "\n";
	std::cout << "x / y = " << idiv(x, y) << "\n";

    return 0;
}

