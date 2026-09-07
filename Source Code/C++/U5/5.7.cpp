#include<iostream>
#include<string>

int main()
{
    using std::cin;
    using std::cout;
    using std::getline;
    using std::string;

    struct car
    {
        string manufacturer{""};
        int year{0};
    };

    int mountCar{0};
    cout << "How many cars do you wish to catalog? ";
    cin >> mountCar;
    cin.get();

    car* cars = new car[mountCar];

    for (int i{0}; i < mountCar; ++i)
    {
        cout << "Car #" << i + 1 << ":" << "\nPlease enter the make: ";
        getline(cin, cars[i].manufacturer);
        cout << "Please enter the year made: ";
        cin >> cars[i].year;
        cin.get();
    }

    cout << "Here is your collection:\n";
    for (int i{0}; i < mountCar; ++i)
    {
        cout << cars[i].year << " " << cars[i].manufacturer << "\n";
    }

    delete [] cars;

    return 0;
}