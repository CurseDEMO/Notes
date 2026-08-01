#include<iostream>

const int dayToHour{24};
const int hourToMinute{60};
const int minuteToSecond{60};

int main()
{
    using std::cin;
    using std::cout;

    cout << "Enter the number of seconds: ";

    long seconds{0};
    cin >> seconds;

    int secondsDisplay;
    secondsDisplay = seconds;

    int days{0};
    days = seconds / (dayToHour * hourToMinute * minuteToSecond);

    int hours{0};
    hours = seconds % (dayToHour * hourToMinute * minuteToSecond) / (minuteToSecond * hourToMinute);

    int minutes{0};
    minutes = seconds % (dayToHour * hourToMinute * minuteToSecond) % (minuteToSecond * hourToMinute) / minuteToSecond;

    seconds = seconds % (dayToHour * hourToMinute * minuteToSecond) % (minuteToSecond * hourToMinute) % minuteToSecond;

    cout << secondsDisplay << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds";

    return 0;
}