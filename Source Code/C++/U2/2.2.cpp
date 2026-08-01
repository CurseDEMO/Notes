#include<iostream>

void distantSwitch(double);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    double input;

    cout << "请输入距离(单位long):" << endl;
    cin >> input;
    distantSwitch(input);

    return 0;
}

void distantSwitch(double ln)
{
    using std::cout;
    using std::endl;
    double ma;
    ma = ln * 220;
    cout << endl << "转化结果是" << ma << endl;
}