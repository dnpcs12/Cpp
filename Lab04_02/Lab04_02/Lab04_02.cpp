// Lab04_02.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string key;
	cout << "키워드 : ";
	cin >> key;

	string data[8] = { "사랑", "프로그래밍","의자","사랑의 바보", "영통역", "천년의 사랑" , "냉장고", "객체지향" };
	cout << "검색결과 : ";
	for (int i = 0; i < 8; i++) {
		if (data[i].find(key) < data[i].length()) {
			cout << data[i] << "  ";
		}
	}
	cout << "\n";
	
    return 0;
}

