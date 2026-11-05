#include <iostream>
#include <windows.h> 
using namespace std;

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x, y;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;

	if ((x >= -1 && x <= 1 && y >= 0 && y <= 1) ||
		(x >= 0 && x <= 1 && y >= -1 && y <= 0)) {
		cout << "Точка M належить" << endl;
	}
	else {
		cout << "Точка М не належить" << endl;
	}

	return 0;
}