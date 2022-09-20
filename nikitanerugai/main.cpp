#include <iostream> 
#include <cmath> 
using namespace std;

int main()
{
	double x, t = 1, z = 3, y = sin(t);
	x = 4 * pow(y, 2) / ((sqrt((4 * z) - 2 * pow(t, 3))));
	cout << "x=" << x << endl;
	return 0;
}
