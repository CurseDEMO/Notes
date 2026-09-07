#include<iostream>
#include<string>

int main()
{
    using std::cout;
    using std::string;

    struct CandyBar
    {
        string brand{};
        double weight{0.0};
        int calorieContent{0};
    };

    CandyBar snacks[3]{{"a", 2.1, 2}, {"b", 3.14, 5}, {"c", 2.8, 9}};

    cout << snacks[0].brand << snacks[0].weight << snacks[0].calorieContent
         << snacks[1].brand << snacks[1].weight << snacks[1].calorieContent
         << snacks[2].brand << snacks[2].weight << snacks[2].calorieContent;

    return 0;
}