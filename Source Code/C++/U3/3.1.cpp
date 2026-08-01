#include<iostream>

const int ftToIn{12};

int main()
{
    using std::cin;
    using std::cout;

    int in{0};

    cout << "输入你的身高(英寸):____\b\b\b\b";
    cin >> in;
    cout << "换算后的身高是: " << in / ftToIn << "英尺, " << in % ftToIn << "英寸";

    return 0;
}




