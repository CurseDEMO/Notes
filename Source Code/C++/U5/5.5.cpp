#include<iostream>
#include<string>

int main()
{
    using std::cin;
    using std::cout;
    using std::string;

    string months[12]{"January", "February", "March",
                      "April", "May", "June",
                      "July", "August", "September",
                      "October", "November", "December"};
    int salesVolume[12]{};
    int i{0};

    for (string month : months)
    {
        cout << month << "'s salesVolume";
        cin >> salesVolume[i];
        ++i;
    }

    int sum{0};
    for (int i : salesVolume)
    {
        sum += i;
    }

    cout << sum;

    return 0;
}