#include <iostream> 

using namespace std;

int main()
{
    int x;
    cout << "Enter your number:";
    cin >> x;
    if (x < 0) {
        cout << "number is negative";
    }
    else if (x > 0) {
        cout << "number is positive";
    }
    else {
        cout << "number equals 0";
    }

    return 0;
}