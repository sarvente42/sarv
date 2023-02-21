#include <iostream>

using namespace std;
int main()
{
	int hryvnia, copijka;
	cout << "Enter hryvnys and copijky";
	cin >> hryvnia >> copijka;
	int morehryvnia = copijka / 100;
	copijka %= 100;
	hryvnia += morehryvnia;
	cout << hryvnia << "hrn" << copijka << "cop" << endl;
	return 0;

}