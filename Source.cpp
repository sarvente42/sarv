#include <iostream> 

using namespace std;

int main()
{
    int x;
    cout << "Enter number:";
    cin >> x;
    (x % 2 == 0) ? cout << "even number" << endl : cout << "buzz number" << endl;

    return 0;
}