// Lab07_01.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class User {
private:
	static vector <string> id;
	static vector <string> password;
public:
	User(){
		id.push_back("defalt");
		password.push_back("1234");
	}
	
		User(string user_id, string user_pw) {
		id.push_back(user_id);
		password.push_back(user_pw);
	}
	bool setId(string user_id,int i) {
		for (unsigned int j = 0; j < id.size(); j++) {
			if (user_id == id[j]) {
				return false;
			}
		}
		id[i] = user_id;
		return true;
	}
	void setPassword(string user_pw, int i) {
		password[i] = user_pw;
	}
	bool checkLogin(string user_id, string user_pw) {
		for (unsigned int i = 0; i < id.size(); i++) {
			if (id[i] == user_id && password[i] == user_pw) {
				return true;
			}
		}
		return false;
	}

	

};
vector<string>User::id;
vector<string>User::password;

int main()
{
	User user[3];
	string id, password, searchId, searchPassword;
	bool end = false;


	for (int i = 0; i < 3; i++) {
	cout << "============" << i+1 << "============\n";
	cout << "id : "; cin >> id;
	if (!user[i].setId(id, i)) {
		cout << "이미 존재하는 ID입니다.\n";
		end = true;
		break;
	};
	cout << "password : "; cin >> password;
	user[i].setPassword(password,i);
	}

	while (1) {
	if (end) break;

	cout << "============LogIn============\n";
	cout << "id : "; cin >> searchId;
	if (searchId == "종료") break;

	cout << "password : "; cin >> searchPassword;

	if (user[0].checkLogin(searchId, searchPassword)) {
	cout << "로그인 되셨습니다.\n";
	}
	else {
	cout << "잘못된 ID거나 PASSWORD 입니다.\n";
	}

	}
	cout << "종료합니다.\n";
    return 0;
}

