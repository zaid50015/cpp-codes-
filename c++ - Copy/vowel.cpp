#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a character  check weather it is a vowel" << endl;
    char ch;
    cin >> ch;
    switch (ch)
    {
    case 'a':
        cout << "it is a vowel";
        break;
    case 'i':
        cout << "it is a vowel";
        break;
    case 'e':
        cout << "it is a vowel";
        break;
    case 'o':
        cout << "it is a vowel";
        break;
    case 'u':
        cout << "it is a vowel";
        break;
    default:
        cout << "it is a constant";
        break;
    }

    return 0;
}