#include <iostream>
using namespace std;

void countOccurence(string str)
{
    int *arr = new int[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < str.length(); i++)
    {
        int ch = str[i];

        int index = ch - 'a';
        // cout << index << endl;

        arr[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        char ch = i + 'a';
        cout << ch << " " << arr[i] << endl;
    }
}

int main()
{
    string str = "zaidzaidzaid";
    countOccurence(str);
    return 0;
}