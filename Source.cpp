#include <iostream>
using namespace std;
int main()
{
	int start, end;
	cout << "Write start-number and end-number->>";
	cin >> start;
	cin >> end;
	if (start > end)
		start, end == end, start;
	for (size_t i = start; i <= end; i++)
	{
		if (i % 2 == 0)
			cout << i << endl;

	}
	return 0;
}