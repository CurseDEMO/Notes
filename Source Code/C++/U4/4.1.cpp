#include<iostream>
#include<cstring>
#include<string>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    cout << "What's your first name? ";
    char firstName[20]{};
    cin.getline(firstName, 20);

    cout << "What's your last name? ";
    char lastName[20]{};
    cin.getline(lastName, 20);

    cout << "What letter grade do you deserve? ";
    char grade;
    cin >> grade;

    cout << "What's your age? ";
    int year{0};
    cin >> year;

    cout << "Name: " << lastName << ", " << firstName << endl
        << "Garde: " << static_cast<char>(grade + 1) << endl
        << "Age: " << year;

    return 0;
}
