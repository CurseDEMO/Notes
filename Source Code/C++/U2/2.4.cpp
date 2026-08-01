#include<iostream>

void month(int);

int main()
{
    using std::cin;
    using std::cout;

    int year;

    cout << "Enter your age: ";
    cin >> year;

    month(year);

    return 0;
}

void month(int year)
{
    using std::cout;
    using std::endl;

    int month;
    month = year * 12;

    cout << month;
}