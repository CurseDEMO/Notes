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
    int salesVolume[3][12]{};

    for (int k{0}, i{0}, j{0}; k < 3; ++k)
    {
        for (string month : months)
        {
            cout << "Year" << i + 1 << ", " << month << "'s sales volume";
            cin >> salesVolume[i][j];
            ++j;
        }
        j = 0;
        ++i;
    }
    int sum{0}, total{0};

    for (int i{0}; i < 3; ++i)
    {
        for (int j : salesVolume[i])
        {
            sum += j;
        }
        cout << sum << "\n";
        total += sum;
        sum = 0;
    }

    cout << total;

    return 0;
}