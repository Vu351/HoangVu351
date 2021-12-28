#include<iostream>
using namespace std;
class MATR
{
private:
	int get_columns;
	int get_rows;
	int** a;
	int get_columns_b;
	int get_rows_b;
	int** b;
public:
	void inputa(int get_columns, int get_rows, int** a)
	{
		for (int i = 0; i < get_rows; i++)
		{
			for (int j = 0; j < get_columns; j++)
			{
				cout << "enter a[" << i << "]" << "[" << j << "]=";
				cin >> a[i][j];
			}
		}
	}
	void output_a(int get_columns, int get_rows, int** a)
	{
		for (int i = 0; i < get_rows; i++)
		{
			for (int j = 0; j < get_columns; j++)
			{
				cout << " " << a[i][j];
			}
			cout << "\n";
		}
	}
	int suma(int get_columns, int get_rows, int** a)
	{
		int s = 0;
		for (int i = 0; i < get_rows; i++)
		{
			for (int j = 0; j < get_columns; j++)
			{
				s += a[i][j];
			}
		}
		return s;
	}
	void inputb(int get_columns_b, int get_rows_b, int** b)
	{
		for (int i = 0; i < get_rows_b; i++)
		{
			for (int j = 0; j < get_columns_b; j++)
			{
				cout << "enter b[" << i << "]" << "[" << j << "]=";
				cin >> b[i][j];
			}
		}
	}
	bool multiplymatrix(int** a, int** b, int** c, int& get_columns, int& get_rows, int& get_rows_b)
	{
		if (get_columns != get_rows_b)
		{
			return false;
		}
		for (int i = 0; i < get_rows; i++)
		{
			for (int j = 0; j < get_rows_b; j++)
			{
				c[i][j] = 0;
				for (int l = 0; l < get_columns; l++)
				{
					c[i][j] += a[i][l] * b[l][j];

				}
			}
		}
		return true;
	}
	int totaldiagonal_a(int** a, int get_rows)
	{
		int sume = 0;
		int sum = 0;
		for (int i = 0; i < get_rows; i++)
		{
			sume += a[i][i];
			sum += a[i][get_rows - i - 1];
		}
		return sume + sum;
	}

	void mult_by_numnumber(int** a, int get_columns, int get_rows, int s, int** c)
	{

		for (int i = 0; i < get_columns; i++)
		{
			for (int j = 0; j < get_rows; j++)
			{
				c[i][j] = s * a[i][j];
			}
		}

	}
	int determinematrixA(int** a, int get_columns)
	{
		int s, sum = 0;
		if (get_columns == 1) return a[0][0];
		if (get_columns == 2) return (a[0][0] * a[1][1] - a[0][1] * a[1][0]);
		for (int k = 0; k < get_columns; k++)
		{
			int** smal = new int* [get_columns];
			for (int i = 0; i < get_columns; i++)
			{
				smal[i] = new int[get_columns];
			}
			for (int i = 0; i < get_columns; i++)
			{
				for (int j = 1; j < get_columns; j++)
				{
					if (i < k) smal[i][j - 1] = a[i][j];
					else if (i > k) smal[i - 1][j - 1] = a[i][j];
				}
			}
			if (k % 2 == 0) s = 1;
			else s = -1;
			sum += a[k][0] * s * determinematrixA(smal, get_columns - 1);
		}
		return sum;
	}
};
int main()
{
	MATR mt;
	int get_columns;
	int get_rows;
	do
	{
		cout << "enter get_rows:";
		cin >> get_rows;
		if (get_rows < 1)
		{
			cout << "sorry to re-enter!";
		}
	} while (get_rows < 1);
	do
	{
		cout << "enter get_columns:";
		cin >> get_columns;
		if (get_columns < 1)
		{
			cout << "sorry to re-enter!";
		}
	} while (get_columns < 1);

	int** a = new int* [get_rows];
	for (int i = 0; i < get_rows; i++)
	{
		a[i] = new int[get_columns];
	}
	mt.inputa(get_columns, get_rows, a);
	mt.output_a(get_columns, get_rows, a);
	cout << "sum=" << mt.suma(get_columns, get_rows, a);
	cout << endl;
	int get_columns_b;
	int get_rows_b;
	do
	{
		cout << "enter get_rows_b:";
		cin >> get_rows_b;
		if (get_rows_b < 1)
		{
			cout << "sorry to re-enter!";
		}
	} while (get_rows_b < 1);
	do
	{
		cout << "enter get_columns_b:";
		cin >> get_columns_b;
		if (get_columns_b < 1)
		{
			cout << "sorry to re-enter!";
		}
	} while (get_columns_b < 1);

	int** b = new int* [get_rows_b];
	for (int i = 0; i < get_rows_b; i++)
	{
		b[i] = new int[get_columns_b];
	}
	mt.inputb(get_columns_b, get_rows_b, b);
	cout << "sum of diagonals in a square matrix:" << mt.totaldiagonal_a(a, get_columns);
	cout << endl;
	int** c = new int* [get_rows];
	for (int i = 0; i < get_rows; i++)
	{
		c[i] = new int[get_columns];
	}
	int s;
	cout << "enter s:";
	cin >> s;
	mt.mult_by_numnumber(a, get_columns, get_rows, s, c);
	cout << "multiply matrix A by a number" << endl;
	mt.output_a(get_columns, get_rows, c);
	if (mt.multiplymatrix(a, b, c, get_columns, get_rows, get_rows_b) == false)
	{
		cout << "can't be done";
	}
	else if (mt.multiplymatrix(a, b, c, get_columns, get_rows, get_rows_b) == true)
	{
		cout << "multiply matrix A and B" << endl;
		mt.output_a(get_columns, get_rows_b, c);
	}
	cout << "\nmatrix determinant A:" << mt.determinematrixA(a, get_columns);
	for (int i = 0; i < get_columns; i++)
	{
		delete[] a[i];
	}
	delete[] a;
	for (int i = 0; i < get_columns_b; i++)
	{
		delete[] b[i];
	}
	delete[] b;
	for (int i = 0; i < get_columns; i++)
	{
		delete[] c[i];
	}
	delete[] c;
}