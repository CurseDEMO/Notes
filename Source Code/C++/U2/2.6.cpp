#include<iostream>

void lightYearToAstronomicalUnits(double);

int main()
{
    using std::cin;
    using std::cout;

    double lightYears;
    cout << "Enter the number of light years: ";
    cin >> lightYears;

    lightYearToAstronomicalUnits(lightYears);

    return 0;
}

void lightYearToAstronomicalUnits(double lightYears)
{
    using std::cout;
    double astronomicalUnits;
    astronomicalUnits = 63240 * lightYears;

    cout << lightYears << " light years = " << astronomicalUnits << " astronomical units.";
}