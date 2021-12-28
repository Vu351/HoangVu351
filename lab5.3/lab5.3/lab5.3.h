#pragma once
#pragma once
#include<iostream>
using namespace std;
class MATRIX
{
private:
	int m, n;
	int** arr;
public:
	MATRIX(int row, int col);
	void defineMatrix();
	void upper();
	void lower();
	MATRIX operator*(const MATRIX& rhs);
	MATRIX operator+(const MATRIX& rhs);
	MATRIX operator-(const MATRIX& rhs);
	MATRIX  A_lower();
	MATRIX  B_upper();
	MATRIX Minor_Matrix(int Row, int Col);
	MATRIX Minor(int Row, int Col);
	MATRIX AlgCompl(int Row, int Col);
	MATRIX Det();
	double det();
	friend ostream& operator <<(ostream& os, const MATRIX& rhs);
};

