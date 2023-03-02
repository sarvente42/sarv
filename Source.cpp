#include <iostream>
using namespace std;
int main()
{
	int number, first_sum, second_sum;
	cout << "Enter six-digit number";
	first_sum = 0;
	second_sum = 0;

	first_sum += number / 100000;
	first_sum += (number / 10000) % 10;
	first_sum += (number / 1000) % 10;
	second_sum += (number / 100) % 10;
	second_sum += (number / 10) % 10;
	second_sum += number % 10;
	if (first_sum == second_sum)
	{
		cout << "Congratulation! You have lucky number";
	}
	else {
		cout << "You got an unlucky number";
	}
	return 0;
}