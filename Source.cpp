#include <iostream>
using namespace std;
int main()
{
	int length, width, height, sq, volume;
	cout << "Length(cm)";
	cin >> length;
	cout << "Width(cm)";
	cin >> width;
	cout << "Height";
	cin >> height;
	sq = length * width;
	volume = sq * height;
	cout << volume;
	return 0;
}