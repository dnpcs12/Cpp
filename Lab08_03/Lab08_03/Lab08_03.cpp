// Lab08_03.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

/*
ktx 프로그램.
정거장 마다 사람들이 내리고 탑승하는 정보를 입력한다. (out , in) 순서
총 5정거장이며, 기차의 최대 인원은 300명.
기차의 수용인원보다 많은 사람이 탑승하면 정원초과를 출력하고, 
가차안에 있는 사람보다 많은 사람이 내리면 정원미달을 출력한다.
첫번째 정류장에선 내리는 사람이 없으며, 5번째 정류장에서는 탑승하는 승객이 없다고 가정.
5번째 역에 도착하면, 기차안에 사람이 가장 많았을 때의 승객 수를 출력한다.
*/
#include "stdafx.h"
#include <iostream>

using namespace std;

class Train {
public:
	Train() {}
	Train(int people) {
		mPeople = people;
	}
	~Train(){}
protected:
	int mPeople;
};

class Ktx :public Train{
public:
	Ktx():Train(0){}
	Ktx(int people):Train(people){}
	~Ktx() {
	
	}

	int station(int takeOff, int takeOn) {
		if (mPeople >= takeOff) {
			mPeople = mPeople - takeOff;
		}
		else {
			return -1;
		}

		if (mPeople + takeOn < 301) {
			mPeople = mPeople + takeOn;
		}
		else {
			return 301;
		}
		return mPeople;
	}
	int getPeople() {
		return mPeople;
	}

};

int main()
{
	Ktx k;
	
	int in = 0;
	int out = 0;
	int num = 0;
	int maxNum = 0;
	bool ispass = true;
	for (int i = 1; i <= 5; i++) {
		cout << i << "번역 : ";
		cin >> out >> in;
		num = k.station(out, in);
		if (num < 0) {
			cout << "정원미달입니다\n";
			ispass = false;
			break;
		}
		else if (num > 300) {
			cout << "정원초과입니다\n";
			ispass = false;
			break;
		}
		if (num > maxNum) {
			maxNum = num;
		}

	}
	if(ispass)
	cout << "가장 많은 사람이 탑승했을 때의 수 : " << maxNum << endl;
    return 0;
}

