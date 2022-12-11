#include <iostream>

using namespace std;

void countOccurence(string str)
{
    int *arr = new int[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < 26; i++)
    {
        int ch = str[i];

        int index = ch - 'a';

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
    string str = "zaidbhaibhailang";
    countOccurence(str);
    return 0;
}