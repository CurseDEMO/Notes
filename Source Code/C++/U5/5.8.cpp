#include<iostream>
#include<cstring>

int main()
{
    using std::cin;
    using std::cout;
    using std::strcmp;

    char word[100]{};
    int count{-1};
    cout << "Enter words (to stop, type the word done):\n";
    do
    {
        cin >> word;
        ++count;
    } while (strcmp(word, "done"));

    cout << "You entered a total of " << count << " words.";

    return 0;
}