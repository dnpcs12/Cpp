// Lab2_3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
void print_DOB(int year = 2000, int month = 1, int day = 1) {
	std::cout << "나의 생년월일은 " << year << "년 " << month << "월 " << day << "일 입니다.\n";
}

int main()
{
	int year = 0, month = 0, day = 0;

	print_DOB();
	std::cout << "year 입력 : "; std::cin >> year;
	std::cout << "month 입력 : "; std::cin >> month;
	std::cout << "day 입력 : "; std::cin >> day;
	print_DOB(year, month, day);
    return 0;
}

