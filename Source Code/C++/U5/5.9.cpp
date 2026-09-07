#include<iostream>
#include<string>

int main()
{
    using std::cin;
    using std::cout;
    using std::string;

    string word{""};
    int count{-1};
    cout << "Enter words (to stop, type the word done):\n";
    do
    {
        cin >> word;
        ++count;
    } while (word != "done");

    cout << "You entered a total of " << count << " words.";

    return 0;
}