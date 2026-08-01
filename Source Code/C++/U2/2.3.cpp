#include<iostream>

void text1(void);
void text2(void);

int main()
{
    text1();
    text1();

    text2();
    text2();

    return 0;
}

void text1(void)
{
    using std::cout;
    using std::endl;
    cout << "Three blind mice" << endl;
}

void text2(void)
{
    using std::cout;
    using std::endl;
    cout << "See how they run" << endl;
}