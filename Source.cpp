#include <iostream>;
using namespace std;
int main()
{
	int a, b, c, d, e, f, g;
	cout << "Enter your numbers" << endl;
	cin >> a >> b >> c >> d >> e >> f >> g;
	cout << std::max(std::max(std::max(std::max(std::max(std::max(a, b), c), d), e), f), g);
	return 0;
}