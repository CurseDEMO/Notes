#include<iostream>

int main()
{
    using std::cin;
    using std::cout;

    cout << "请输入驱车里程: ";

    int drivingMileage{0};
    cin >> drivingMileage;

    cout << "请输入耗油量: ";

    int fuelConsumption{0};
    cin >> fuelConsumption;

    double fuelConsumptionPer_100km{0.0};
    fuelConsumptionPer_100km = fuelConsumption / static_cast<double>(drivingMileage) * 100;

    cout << "每一百公里耗油量为: " << fuelConsumptionPer_100km;

    return 0;
}