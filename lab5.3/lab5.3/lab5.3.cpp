#include "lab53.h"
MATRIX::MATRIX(int row = 0, int col = 0) {
	m = row;
	n = col;
	arr = new int* [m];
	for (int i = 0; i < m; i++) {
		arr[i] = new int[n];
	}
}
void MATRIX::defineMatrix()
{
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
void MATRIX::lower()
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i < j)
			{
				cout << "0" << " ";
			}
			else
				cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void MATRIX::upper()
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j)
			{
				cout << "0" << " ";
			}
			else
				cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
MATRIX MATRIX::operator*(const MATRIX& rhs) {
	MATRIX temp(m, rhs.n);
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
MATRIX MATRIX::operator+(const MATRIX& rhs) {
	MATRIX temp(m, n);
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
MATRIX MATRIX::operator-(const MATRIX& rhs) {
	MATRIX temp(m, n);
	if (m == rhs.m && n == rhs.n) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				temp.arr[i][j] = arr[i][j] - rhs.arr[i][j];
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
MATRIX MATRIX::A_lower()
{
	MATRIX res(m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i < j)
			{
				res.arr[i][j] = 0;
			}
			else
				res.arr[i][j] = arr[i][j];
		}
	}
	return res;
}
MATRIX MATRIX::B_upper()
{
	MATRIX re(m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j)
			{
				re.arr[i][j] = 0;
			}
			else
				re.arr[i][j] = arr[i][j];
		}
	}
	return re;
}
//MATRIX MATRIX::determinematrixA()
//{
//	int s, sum = 0;
//	if (m == 1) return arr[0][0];
//	if (m == 2) return (arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0]);
//	for (int k = 0; k < m; k++)
//	{
//		MATRIX smal(m, n);
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 1; j < m; j++)
//			{
//				if (i < k) smal.arr[i][j - 1] = arr[i][j];
//				else if (i > k) smal.arr[i - 1][j - 1] = arr[i][j];
//			}
//		}
//		if (k % 2 == 0) s = 1;
//		else s = -1;
//		sum += arr[k][0] * s * this->determinematrixA();
//	}
//	return sum;
//}
double MATRIX::det()
{
	if (n == m && n == 2)
	{
		return (arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0]);
	}
	if (n == m && n == 3)
	{
		return ((arr[0][0] * arr[1][1] * arr[2][2] + arr[2][0] * arr[0][1] * arr[1][2] + arr[0][2] * arr[2][1] * arr[1][0]) - (arr[0][2] * arr[1][1] * arr[2][0] + arr[2][2] * arr[1][0] * arr[0][1] + arr[0][0] * arr[2][1] * arr[1][2]));
	}
}

ostream& operator <<(ostream& os, const MATRIX& rhs) {
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