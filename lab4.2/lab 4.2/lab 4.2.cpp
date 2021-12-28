#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void open(ifstream& FileIN)
{
	FileIN.open("file_path_full.txt", ios_base::in);
	if (!FileIN)
	{
		cout << "false";
	}
	while (!FileIN.eof())
	{
		string str;
		getline(FileIN, str);
		cout << str << endl;
	}
}
void copyfile(ifstream& FileIN, ofstream& Filecopy)
{
	FileIN.open("file_path_full.txt", ios_base::in);
	string str;
	Filecopy.open("file_path_full_copy.txt", ios_base::out);
	while (!FileIN.eof())
	{
		getline(FileIN, str);
		cout << str << endl;
		Filecopy << str << endl;
	}
}
int main()
{
	ifstream FileIN;
	ofstream Filecopy;
	//open(FileIN);
	copyfile(FileIN, Filecopy);
	FileIN.close();
	Filecopy.close();
}