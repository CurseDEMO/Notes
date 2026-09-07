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

    CandyBar snack{"Mocha Munch", 2.3, 350};
    cout << snack.brand << snack.weight << snack.calorieContent;
}