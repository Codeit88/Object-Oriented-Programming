#include<iostream>
using namespace std;
class Matrix {
	int rows, cols;
	int** ar;
public:
	Matrix() {
		rows = 0;
		cols = 0;
		ar = new int* [rows];
		for (int i = 0;i < rows;i++) {
			ar[i] = new int[cols];
		}
		ar = NULL;
	}
	Matrix(int** ar, int& rows1, int& cols1) {
		rows = rows1;
		cols = cols1;
		ar = new int* [rows];
		for (int i = 0;i < rows;i++) {
			ar[i] = new int[cols];
		}
	}
	int getrows() {
		return rows;
	}
	int getcols() {
		return cols;
	}
	int** getmat() {
		return ar;
	}
	friend ostream& operator<<(ostream& op, Matrix& a);
	friend istream& operator>>(istream& ip, Matrix& a) {
		for (int i = 0;i < a.rows;i++) {
			for (int j = 0;i < a.cols;i++) {
				ip >> a.ar[i][j];
			}
		}
		return ip;
	}
	~Matrix() {}
};
int main() {
	int** a1, rows = 3, cols = 3;
	a1 = new int* [rows];
	for (int i = 0;i < rows;i++) {
		a1[i] = new int[cols];
	}
	Matrix m1(a1, rows, cols);
	cin >> m1;
}
