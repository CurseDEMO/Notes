#include<iostream>

const double kmToFeet{0.6214};
const double gallonToLiter{3.875};

int main()
{
    using std::cin;
    using std::cout;

    cout << "请输入每百公里消耗燃油量(L): ";

    int fuelConsumptionPerHundredKilometers{0};
    cin >> fuelConsumptionPerHundredKilometers;

    double milesPerGallonOfFuelConsumed{0.0};
    milesPerGallonOfFuelConsumed = 1 / (fuelConsumptionPerHundredKilometers / 100.0 / kmToFeet / gallonToLiter);

    cout << "消耗每加仑燃油可行驶: " << milesPerGallonOfFuelConsumed;

    return 0;
}