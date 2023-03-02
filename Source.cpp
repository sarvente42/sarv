#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int p, r, volume;
	cout << "Radius->>";
	cin >> r;
	p = 3.14;
	volume = 3 / 4 * p * pow(r, 3);
	cout << volume;
	return 0;
}