#include <iostream>

using namespace std;

int main() {
    
    int year;
    cout << "Enter the year:";
    cin >> year;

    int days = 365 + ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
    cout << "In " << year << " year = " << days << "days" << endl;

    return 0;
}