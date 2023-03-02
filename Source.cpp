#include <iostream>
using namespace std;
int main()
{
	int number, one, two, three, four;
	cout << "Enter four-digit number->>";
	cin >> number;
	if (number < 1000 || number > 10000)
	{
		cout << "Your number doesn't have four-digit"<<endl;
		return 0;
	}
	one = number / 1000;
	two = (number / 100) % 10;
	three = (number / 10) % 10;
	four = number % 10;
	one, two == two, one;
	three, four == four, three;
	cout << one << two << three << four << endl;
	return 0;
}