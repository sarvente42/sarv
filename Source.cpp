#include <iostream>
using namespace std;
int main()
{
	int scale, distance, distance_km;
	cout << "Scale of map->>";
	cin >> scale;
	cout << "Distance between cities on the map->>";
	cin >> distance;
	cout << "Distance between cities irl->>";
	distance_km = scale * distance;
	cout << distance_km;
	return 0;
}