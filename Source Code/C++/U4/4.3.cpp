#include<iostream>
#include<cstring>

int main()
{
    using std::cin;
    using std::cout;
    using std::strcat;

    cout << "Enter your first name: ";
    char firstName[20]{};
    cin.getline(firstName, 20);

    cout << "Enter your last name: ";
    char lastName[20]{};
    cin.getline(lastName, 20);

    cout << "Here's the information in a single string: " << strcat(firstName, ", ") << lastName;

    return 0;
}