#pragma once
#include<iostream>
using namespace std;
class matrix
{
private:

	int m, n, ** arr;
public:
	matrix(int row, int col);
	void defineMatrix();
	matrix operator+(const matrix& rhs);
	matrix operator*(const matrix& rhs);
	friend ostream& operator <<(ostream& os, const matrix& rhs);
};


