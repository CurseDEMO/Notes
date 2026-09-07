#include<iostream>
#include<string>

int main()
{
    using std::cin;
    using std::cout;
    using std::getline;
    using std::string;

    cout << "Enter your first name: ";
    string firstName{};
    getline(cin, firstName);

    cout << "Enter your last name: ";
    string lastName{};
    getline(cin, lastName);

    cout << "Here's the information in a single string: " << firstName + ", " + lastName;

    return 0;
}