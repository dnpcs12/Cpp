// Lab05_04.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

bool checknum(const int num[],int count) {
	int check = 0;

	for (int i = 0; i < count; i++) {
		if (num[i] <= count && num[i] > 0) {
			check = num[i];
			for (int j = i + 1; j < count; j++) {
				if (check == num[j]) {
					return false;
				}
			}
		}
		else {
			return false;
		}
	}
	return true;
}

int main()
{
	int *number = 0;
	int size = 0;
	
	while (true) {
		cout << "Please enter number of value to process: "; cin >> size;
		if (size < 0) {
			break;
		}
		number = new int[size];


		cout << "Please enter number: ";
		for (int i = 0; i < size; i++) {
			 cin >> number[i];
		}
		
		
		if (checknum(number, size)) {
			cout << "True" <<'\n';
		

		}
		else {
			cout << "False" << '\n';
		}

		delete[] number;
	}


	

    return 0;
}

