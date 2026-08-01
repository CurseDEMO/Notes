#include<iostream>

void fahrenheit(double);

int main()
{
    using std::cin;
    using std::cout;

    double celsius;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;

    fahrenheit(celsius);

    return 0;
}

void fahrenheit(double celsius)
{
    using std::cout;

    double fahrenheit;
    fahrenheit = 1.8 * celsius + 32.0;

    cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit.";
}