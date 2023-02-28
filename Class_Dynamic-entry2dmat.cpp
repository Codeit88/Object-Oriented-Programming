#include<iostream>
using namespace std;
class Matrix {
	int rows, cols, ** mat;
public:
	Matrix() {
		rows = cols = 0;
		mat = NULL;
	}
	Matrix operator+(const Matrix&matr) {
		Matrix temp;
		temp.rows = matr.rows;
		temp.cols = matr.cols;
		temp.mat = new int* [matr.rows];
		for (int i = 0;i < matr.rows;i++) {
			temp.mat[i] = new int[matr.cols];
		}
		for (int i = 0;i < matr.rows;i++) {
			for (int j = 0;j < matr.cols;j++) {
				temp.mat[i][j] = mat[i][j] + matr.mat[i][j];
			}
		}
		return temp;
	}
	friend istream& operator>>(istream& ib, Matrix& matr) {
		cout << " Enter the rows : ";
		ib >> matr.rows;		cout << " Enter the cols : ";
		ib >> matr.cols;
		matr.mat = new int* [matr.rows];
		cout << "\n";
		cout << " Enter the matrix elements : \n";
		for (int i = 0;i < matr.rows;i++) {
			matr.mat[i] = new int[matr.cols];
		}
		for (int i = 0;i < matr.rows;i++) {
			for (int j = 0;j < matr.cols;j++) {
				ib >> matr.mat[i][j];
			}
		}
		return ib;
	}
	friend ostream& operator<<(ostream& ob, Matrix& matr) {
		cout << " Matrix elements : \n";
		for (int i = 0;i < matr.rows;i++) {
			for (int j = 0;j < matr.cols;j++) {
				ob << "\t"<< matr.mat[i][j];
			}
			ob << endl;
		}
		return ob;
	}
	/*~Matrix() {
		for (int i = 0;i < rows; i++) {
			delete mat[i];
		}
	}*/
};
int main() {
	Matrix m1,m2,m3;
	cin >> m1;
	cout << m1;
	cin >> m2;
	cout << m2;
	m3 = m1 + m2;
	cout << m3;
	return 0;
}
