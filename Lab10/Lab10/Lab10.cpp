// Lab10.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

template<typename T>

class Point{
private:
	T x1;
	T y1;
	T x2;
	T y2;
public:
	void setPointFromKeybord() {
		
		cout << "첫번째 x:"; cin >> x1;
		cout << "첫번째 y:"; cin >> y1;
		cout << "두번째 x:"; cin >> x2;
		cout << "두번째 y:"; cin >> y2;
	}
	void print() {
		cout<< "\n두 점 사이의 거리: "<< (T)sqrt((x1 - x2)*(x1 - x2) + (y1 - y2) * (y1 - y2));
		cout << endl;
	}
};

int main()
{
	//Point<int> p;
	//Point<float> p;
	Point<double> p;
	p.setPointFromKeybord();
	p.print();
	
	return 0;
}

