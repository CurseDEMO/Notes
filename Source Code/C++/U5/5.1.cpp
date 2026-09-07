#include<iostream>

int main()
{
    using std::cin;
    using std::cout;

    int a{0};
    int b{0};

    cin >> a;
    cin >> b;

    int sum{0};
    for (int i{a}; i <= b; ++i)
        sum += i;

    cout << sum;

    return 0;
}