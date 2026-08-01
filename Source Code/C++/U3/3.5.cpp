#include<iostream>

int main()
{
    using std::cin;
    using std::cout;

    cout << "Enter the world's population: ";

    long long worldPopulation{0};
    cin >> worldPopulation;

    cout << "Enter the population of the US: ";

    long long USPopulation{0};
    cin >> USPopulation;

    double percents{0.0};
    percents = static_cast<double>(USPopulation) / worldPopulation * 100;
    
    cout << "The population of the US is " << percents << "% of the world population.";

    return 0;
}