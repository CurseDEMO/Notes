#include<iostream>

const int feToIn{12};
const double inToM{0.0254};
const double pToKg{2.2};

int main()
{
    using std::cin;
    using std::cout;

    cout << "请输入你的身高的英尺部分: ";
    int feHeight{0};
    cin >> feHeight;

    cout << "请输入你的身高的英寸部分: ";
    int inHeight{0};
    cin >> inHeight;

    double mHeight{0.0};
    mHeight = (feHeight * feToIn + inHeight) * inToM;

    cout << "请输入体重(磅): ";
    double pWeight;
    cin >> pWeight;

    double kgWeight;
    kgWeight = pWeight / pToKg;

    double bmi{0.0};
    bmi = kgWeight / (mHeight * mHeight);

    cout << "您的BMI为: " << bmi;
    
    return 0;
}