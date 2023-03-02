#include <iostream>
using namespace std;

int main()
{
	int x, y, z;
	cout << "Enter 1 and 2 number->>";
	cin >> x;
	cin >> y;
	cout << "Enter number to get sum";
	cin >> z;
	while (z==0)
	{
		x += y;
		cout << x << endl;
	}
	return 0;
}