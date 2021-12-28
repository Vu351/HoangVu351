// Lab1_DataTypes.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<iostream>
#include <limits.h>
#include<bitset>
using namespace std;
int main()
{
	cout << "1. " << "\n\n";
	cout << "Vu Huy Hoang " << endl;
	cout << "group 211-351" << endl;
	cout << "2. " << "\n\n";
	cout << "max int:" << INT_MAX << endl;
	cout << "min int:" << INT_MIN << endl;
	cout << "max float: " << FLT_MAX << endl;
	cout << "min float:" << FLT_MIN << endl;
	cout << "max double: " << DBL_MAX << endl;
	cout << "min double:" << DBL_MIN << endl;
	cout << "max char: " << CHAR_MAX << endl;
	cout << "min char:" << CHAR_MIN << endl;
	cout << "sizeof int:" << sizeof(int) << endl;
	cout << "sizeof float:" << sizeof(float) << endl;
	cout << "sizeof double:" << sizeof(double) << endl;
	cout << "sizeof char:" << sizeof(char) << endl;
	cout << "4. " << "\n\n";
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	if (a == 0)
	{
		if (b == 0)
		{
			cout << "countless";
		}
		else
		{
			cout << "unreasonable";
		}
	}
	else
	{
		cout << "x=" << b / a << endl;
	}
	cout << "5. " << "\n\n";
	int x, y, z, t;
	cout << "enter coordinates A:";
	cin >> x >> y;
	cout << "enter coordinates B:";
	cin >> z >> t;
	cout << "midpoint coordinates A and B:" << "(" << (x + z) / 2 << ", " << (y + t) / 2 << ")";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
