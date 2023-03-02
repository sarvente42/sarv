#include <iostream> 

using namespace std;

int main()
{
    int x, y;
    cout << "Enter 1 number:";
    cin >> x;
    cout << "Enter 2 number:";
    cin >> y;
    (x > y) ? cout << y << x : cout << x << y << endl;

    return 0;
}