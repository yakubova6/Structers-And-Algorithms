// Задание 11(e)
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	double x, y;
	cin >> x >> y;

	if (x >= y && y >= -0.45 && x <= 1)
	{
		cout << "Точка попадает внутрь заданной области" << endl;
	}
	else
	{
		cout << "Точка не попадает внутрь заданной области" << endl;
	}
	return 0;
}