// Lab04_03.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{
	ofstream text;
	text.open("lab04_03.txt");

	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			text << setw(4) << rand() % 101;
		}
		text << "\n";
	}
	text.close();

    return 0;
}

