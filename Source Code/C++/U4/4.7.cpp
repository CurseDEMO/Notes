#include<iostream>
#include<string>

int main()
{
    using std::cin;
    using std::cout;
    using std::getline;
    using std::string;

    struct Pizza
    {
        string companyName{};
        int diameter{0};
        int weight{0};
    };

    Pizza a{};
    getline(cin, a.companyName);
    cin >> a.diameter;
    cin >> a.weight;

    cout << a.companyName << a.diameter << a.weight;
}