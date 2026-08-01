#include<iostream>

const double dToM{60.0};
const double mToS{60.0};

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    cout << "Enter a latitude in degrees, minutes, and seconds" << endl;
    cout << "First, enter the degrees: ";

    int degrees{0};
    cin >> degrees;

    cout << "Next, enter the minutes of arc: ";

    int minutes{0};
    cin >> minutes;

    cout << "Finally, enter the seconds of arc: ";

    int seconds{0};
    cin >> seconds;

    double toDegrees{0.0};
    toDegrees = degrees + (minutes / dToM) + (seconds / mToS / dToM);

    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << toDegrees << " degrees";

    return 0;
}