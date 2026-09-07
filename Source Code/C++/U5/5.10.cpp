#include<iostream>
#include<string>

int main()
{
    using std::cin;
    using std::cout;
    int row{0};
    cout << "Enter number of rows: ";
    cin >> row;
    for (int i{0}; i < row; ++i)
    {
        for (int j{row - 1}; j > i; --j)
        {
            cout << ".";
        }
        for (int k{0}; k <= i; ++k)
        {
            cout << "*";
        }
        cout << "\n";
    }
}