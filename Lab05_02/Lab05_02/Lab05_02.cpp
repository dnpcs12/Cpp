// Lab05_02.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void changeStr(string *base) {
	cout << "input>"; cin >> *base;
}
int main()
{
	string base = "This is defalut value ";
	//string *pstr = &base;

	cout << "기본값 출력>" << base << '\n';
	changeStr(&base);

	cout << "변환된 값 출력>" << base << '\n';

    return 0;
}

