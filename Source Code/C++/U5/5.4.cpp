#include<iostream>

const int principal{100};
const double daphneSInterestRates{0.1};
const double cleoSInterestRates{0.05};

int main()
{
    using std::cout;

    double cleo{principal};
    double daphne{principal};
    double cleoInterest{0.0};
    int year{0};

    do
    {
        ++year;

        cleoInterest = cleo * cleoSInterestRates;
        cleo += cleoInterest;

        daphne += principal * daphneSInterestRates;
    } while (cleo < daphne);

    cout << year << "\n"
         << cleo << "\n"
         << daphne;

    return 0;
}