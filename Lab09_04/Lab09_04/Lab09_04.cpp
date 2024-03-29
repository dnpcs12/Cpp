// Lab09_04.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
class Stack {
private:
	int* p_list;
	int size;
	int MAX_SIZE;
public:
	Stack(int _MAX_SIZE = 1000) {
		size = 0;
		MAX_SIZE = _MAX_SIZE;
		p_list = new int[MAX_SIZE];

	} // 맥스사이즈만큼 동적할당.
	~Stack() {
		delete[] p_list;
	}
	
	int find_index(int _item){
		for (int i = 0; i < size; i++) {
			if (p_list[i] == _item) {
				return i;
			}
		}

		return -1;
	}
	void push(int _itme){
		if (find_index(_itme) == -1) {
			if (size >= MAX_SIZE) {
				cout << "Error : out of memory\n";
			}
			else {
				p_list[size] = _itme;
				size++;
			}
			
		}
		
	}

	int pop(){
		if (size == 0) {
			cout << "Error: No item exist in list\n";
		}
		else
		{
		   size--;
		}
		return p_list[size];
	}
	void print() const {
		cout << "Items in the list : ";
		for (int i = 0; i < size; i++) {
			cout << p_list[i] << ", ";
		}
		cout << "\n";
	}
	int get_size(){
		return size;
	}
	int get_item(int _index){
		return p_list[_index];
	}
	void operator+=(Stack &s2) {
		for (int i = 0; i < s2.get_size(); i++) {
			this->push(s2.get_item(i));
		}
		
	}
	bool operator==(Stack& s) {
		if (this->get_size() == s.get_size()) {
			for (int i = 0; i < s.get_size(); i++){
				if (s.get_item(i) != this->get_item(i)) {
					return false;
				}
			}
		}
		else return false;

		return true;
	}

};
int main()
{
	Stack s1, s2;
	s1.push(1);
	s1.push(2);
	s1.push(3);

	s2.push(1);
	s2.push(2);
	s2.push(5);

	s1.print();
	s2.print();
	s1 += s2;

	s1.print();
	s2.print();
	cout << "s1 == s2 ?" << (s1 == s2) << endl;
	s1.pop();
	s1.pop();
	s2.pop();
	cout << "s1 == s2 ?" << (s1 == s2) << endl;

	s2.pop();
	s2.pop();
	s2.pop();


    return 0;
}

