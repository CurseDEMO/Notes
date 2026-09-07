#include<iostream>
#include<string>

int main()
{
    using std::cin;
    using std::cout;
    using std::getline;
    using std::string;

    string name{};
    string dessert{};

    cout << "Enter your name:\n";
    getline(cin, name);

    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);

    cout << "I have some delicious " << dessert << " for you, " << name << ".\n";

    return 0;
}