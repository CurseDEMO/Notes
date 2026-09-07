#include<iostream>
#include<array>

int main()
{
    using std::array;
    using std::cin;
    using std::cout;

    array<int, 3> arr;
    int count{0};
    cin >> arr[0];
    count += 1;
    cin >> arr[1];
    count += 1;
    cin >> arr[2];
    count += 1;

    cout << (arr[0] + arr[1] + arr[2]) / count << count;
}