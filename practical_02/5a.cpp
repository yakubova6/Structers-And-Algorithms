// Задание 5(а)
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double w, x, y, z;

	cin >> x >> y >> z;

	w = sin(fabs((y - (sqrt(fabs(x)))) * (x - (y / ((pow(z, 2) + ((pow(x, 2) )/ 4))))) ));
	cout << w;

	return 0;
}
