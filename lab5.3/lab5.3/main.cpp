#include"lab53.h"
int main()
{
	cout << "\t\t\t ***************" << endl;
	cout << "\t\t\t Question No. 01" << endl;
	cout << "\t\t\t Class of Matrix" << endl;
	cout << "\t\t\t ***************" << endl;
	int row, col;
	cout << "enter row:";
	cin >> row;
	cout << "enter col:";
	cin >> col;
	MATRIX a(row, col), b(row, col);
	cout << "lower triangular matrix";
	a.defineMatrix();
	a.lower();
	cout << "upper triangular matrix";
	b.defineMatrix();
	b.upper();
	MATRIX X = a.A_lower();
	MATRIX Y = b.B_upper();
	cout << "sum" << endl << X + Y;
	cout << "MULTIPLICATION" << endl << X * Y;
	cout << "subtract" << endl << X - Y;
	cout << "det=" << X.det();
}