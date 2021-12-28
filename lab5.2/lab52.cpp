#include"lab52.h"
matrix::matrix(int row = 0, int col = 0) {
	m = row;
	n = col;
	arr = new int* [m];
	for (int i = 0; i < m; i++) {
		arr[i] = new int[n];
	}
}
void matrix::defineMatrix() {
	cout << "Enter matrix elements" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Row " << i + 1 << " " << "Column " << j + 1 << ": ";
			cin >> arr[i][j];
		}
	}
}
matrix matrix::operator+(const matrix& rhs) {
	matrix temp(m, n);
	if (m == rhs.m && n == rhs.n) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				temp.arr[i][j] = arr[i][j] + rhs.arr[i][j];
			}
		}
	}
	else {
		cout << "Invalid Addition" << endl;
		for (int i = 0; i < temp.m; i++) {
			for (int j = 0; j < temp.n; j++) {
				temp.arr[i][j] = NULL;
			}
		}
	}
	return temp;
}
matrix matrix::operator*(const matrix& rhs) {
	matrix temp(m, rhs.n);
	if (n == rhs.m) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < rhs.n; j++) {
				temp.arr[i][j] = 0;
				for (int k = 0; k < n; k++) {
					temp.arr[i][j] = temp.arr[i][j] + (arr[i][k] * rhs.arr[k][j]);
				}
			}
		}
	}
	else {
		cout << "Invalid Multiplication" << endl;
		for (int i = 0; i < temp.m; i++) {
			for (int j = 0; j < temp.n; j++) {
				temp.arr[i][j] = NULL;
			}
		}
	}
	return temp;
}
ostream& operator <<(ostream& os, const matrix& rhs) {
	for (int i = 0; i < rhs.m; i++)
	{
		for (int j = 0; j < rhs.n; j++)
		{
			os << rhs.arr[i][j] << " ";
		}
		os << endl;
	}
	return os;
}