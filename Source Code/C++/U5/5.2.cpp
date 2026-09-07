#include<iostream>
#include<array>

const int size{100};

int main()
{
    using std::array;
    using std::cout;

    array<long double, size> arr{1, 1};
    for (int i{2}; i < size; ++i)
        arr[i] = i * arr[i - 1];
    for (int i{0}; i < size; ++i)
        cout << i << "! = " << arr[i] << "\n";

    return 0;
    
}