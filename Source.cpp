#include <iostream>
using namespace std;
int main()
{
	int start, end, sum;
	cout << "Enter start and end of range->>";
	cin >> start;
	cin >> end;
	sum = 0;
	for (size_t i = start; i <= end; i++)
	{
		sum += i;
		cout << sum << endl;
	}
	return 0;
}
