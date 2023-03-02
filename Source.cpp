#include <iostream> 

using namespace std;

int main()
{
    int x, y;
    cout << "Enter number 1:";
    cin >> x;
    cout << "Enter number 2:";
    cin >> y;
    (x < y) ? cout << "number 1 is min" << endl : cout << "number 2 is min" << endl;


    return 0;
}