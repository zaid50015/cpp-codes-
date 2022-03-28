#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the length of the world " << endl;
    int n;
    cin >> n;
    cin.ignore();
    cout << "Enter the sentence" << endl;
    char arr[n + 1];
    cin.getline(arr, n);

    int currlen = 0;
    int maxlen = 0;
    int start = 0;
    int maxstart = 0;
    int i = 0;
    while (i<(n+1))
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currlen > maxlen)
            {
                maxlen = currlen;
                maxstart = start;
            }
            currlen = 0;
            start = i + 1;
        }
        else
        {
            currlen++;
        }
      

        i++;
    }
    cout << "length of the largest world is " << maxlen << endl;
    cout <<  "The world is " << endl;
    for (int i =0; i < maxlen; i++)
    {
        cout << arr[i+maxstart];
    }
    return 0;
}