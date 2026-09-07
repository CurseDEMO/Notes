#include<iostream>

int main()
{
    using std::cin;
    using std::cout;

    double sum{0.0};
    double i{0.0};
    do
    {
        cin >> i;
        sum += i;
        cout << sum << "\n";
    } while (i != 0);

    return 0;
}