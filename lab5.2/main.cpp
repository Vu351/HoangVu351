#include"lab52.h"
int main() {
	cout << "\t\t\t ***************" << endl;
	cout << "\t\t\t Question No. 01" << endl;
	cout << "\t\t\t Class of Matrix" << endl;
	cout << "\t\t\t ***************" << endl;
	matrix a(3, 3), b(3, 3);
	a.defineMatrix();
	cout << a;
	b.defineMatrix();
	cout << b;
	cout << "\nADDITION OF MATRICES" << endl << a + b;
	cout << "\nMULTIPLICATION OF MATRICES" << endl << a * b;
}