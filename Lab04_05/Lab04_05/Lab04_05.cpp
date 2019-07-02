// Lab04_05.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string sen;
	ifstream input;
	ofstream output;
	int length;
	cout << "length : ";
	cin >> length;
	input.open("input.txt");
	output.open("lab04_05.txt");
	
	int check = 0; 
	if (input.is_open()) {
		while (getline(input, sen)) {
		   int i = 0;
			 while (i < sen.length()) {
			 if (check == length) {  
					 output << '\n';
					 check = 0;
					 if (sen[i] == ' ') { // 줄바꿈 이후 글자가 공백이라면, 건너 뛰기.
						 i++;
						 check++;
						 continue;
					 }
				 }
				output << sen[i];
				i++;
				check++;
		
			}
			
		}
	}
		input.close();

	
	output.close();
	cout << "end\n";


    return 0;
}

