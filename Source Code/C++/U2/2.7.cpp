#include<iostream>

void time(int, int);

int main()
{
    using std::cin;
    using std::cout;

    int hour;
    cout << "Enter the number of hours: ";
    cin >> hour;

    int minute;
    cout << "Enter the number of minutes: ";
    cin >> minute;

    time(hour, minute);

    return 0;
}

void time(int hour, int minute)
{
    using std::cout;
    cout << "Time: " << hour << ":" << minute;
}