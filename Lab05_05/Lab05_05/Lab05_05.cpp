// Lab05_05.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;
using Matrix = vector<vector<int>>;

void init_Matrix(Matrix& m);
void print_Matrix(const Matrix m);
void product_Matrix(const Matrix& m_a, const Matrix& b, int row, int col);

int main()
{
	srand((unsigned int)time(NULL));

	int row_a = 0, col_a = 0, row_b = 0, col_b = 0;

	cout << "A의 행과 열의 크기를 입력해주세요 : "; cin >> row_a >> col_a;
	cout << "B의 행과 열의 크기를 입력해주세요 : "; cin >> row_b >> col_b;

	vector<vector<int>> vec_a(row_a, vector<int>(col_a));
	vector<vector<int>> vec_b(row_b, vector<int>(col_b));
	init_Matrix(vec_a);
	init_Matrix(vec_b);

	cout << "A행렬: \n";
	print_Matrix(vec_a);
	cout << "B행렬: \n";
	print_Matrix(vec_b);

	if (col_a == row_b) {
		product_Matrix(vec_a, vec_b, row_a, col_b);
	}
	else {
		cout << "두 행렬을 곱할 수 없습니다.\n";
	}

	return 0;
}

void init_Matrix(Matrix& m) {
	for (vector<int> &row : m) { 
		for (int& elem : row) {
			elem = (rand() % 20) - 10;
		
		}
	}
}

void print_Matrix(const Matrix m) {
	for (unsigned row = 0; row < m.size(); row++) {
		for (unsigned col = 0; col < m[row].size(); col++) {
			cout << setw(4) << m[row][col];
		}
		cout << "\n";
	}
	cout << '\n';
}

/*
행렬의 곱셈
A 행렬 * B 행렬  AB행렬
 l* m    m * n  = l * n

 A = [a11 a12]  B = [b11 b12]
     [a21 a22]      [b21 b22]
 
 AB = [a11b11 + a12b21  a11a12 + a12b22]
      [a21b11 + a22b21  a21b12 + a21b22]

*/

void product_Matrix(const Matrix& m_a, const Matrix& m_b, int row, int col) {
	Matrix product(row, vector<int>(col));
	for (int i = 0; i < row; i++) {
		int num = 0;
		for (int j = 0; j < col; j++) {
			for (int k = 0; k < m_b.size(); k++) {
				num = num + m_a[i][k] * m_b[k][j];
			}
			product[i][j] = num;
		}
	}
	cout << "AB 곱행렬: \n";
	print_Matrix(product);
}