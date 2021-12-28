#include<iostream>
#include<cstring>
#define max 100
using namespace std;
void enterarray(double a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "enter array a[" << i << "] : ";
		cin >> a[i];
	}
}
void outputarray(double a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
void permutation(double& a, double& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void Sortupascending(double a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				permutation(a[i], a[j]);
			}
		}

	}
}
void entercharacterarray(char string[50])
{
	fflush(stdin);
	cout << "enter character:";
	cin.getline(string, 50);
}
void outputcharacter(char string[50])
{
	cout << string;
}
void sortstring(char string[50])
{
	char temp;
	int size = strlen(string);
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (string[i] > string[j]) {
				temp = string[i];
				string[i] = string[j];
				string[j] = temp;
			}
		}
	}
}
int main()
{
	char string[50];
	double a[max];
	int chose;
	cout << "-------------Menu---------------" << endl;
	cout << "  1.Sortupascending " << endl;
	cout << "  2.sortstring" << endl;
	do
	{
		int n;
		cout << "please choose!:";
		cin >> chose;
		switch (chose == 1)
		{
		case 1:
			cout << "enter the number of elements!" << endl;
			cin >> n;
			enterarray(a, n);
			Sortupascending(a, n);
			cout << "array after sorting!" << endl;
			outputarray(a, n);
		}
		switch (chose == 2)
		{
		case 1:
			cin.getline(string, 50);
			entercharacterarray(string);
			sortstring(string);
			cout << "character array after sorting!" << endl;
			outputcharacter(string);
			cout << endl;
			break;
		}
	} while (chose);
}
