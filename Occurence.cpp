#include <iostream>
using namespace std;

// void occurenceChar(string str)
// {
//     int n = str.length();
//     int *arr = new int[26];
//     for (int i = 0; i < 26; i++)
//     {
//         arr[i] = 0;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         char ch = str[i];
//         int index = ch - 'a';
//         arr[index]++;
//     }

//     for (int i = 0; i < 26; i++)
//     {
//         char ch = i + 'a';
//         cout << arr[i] <<" " <<ch << endl;
//     }
// }

int *occurenceChar(string str)
{
    int n = str.length();
    int *arr = new int[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        char ch = str[i];
        int index = ch - 'a';
        arr[index]++;
    }

    // for (int i = 0; i < 26; i++)
    // {
    //     char ch = i + 'a';
    //     cout << arr[i] << " " << ch << endl;
    // }
    return arr;
}

int main()
{
    string str = "zaid";
    int *arr1 = occurenceChar(str);

    for (int i = 0; i < 26; i++)
    {
        char ch = i + 'a';
        cout << ch << "   "<<arr1[i] << endl;
    }

    return 0;
}