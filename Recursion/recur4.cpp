#include <iostream>
using namespace std;

// void reverse(string& str, int i, int j)
// {
//     // base case
//     if (i > j)
//     {
//         return;
//     }
//     swap(str[i], str[j]);
//     i++;
//     j--;
//     reverse(str, i, j);
// }

// int main()
// {
//     string name = "Babbar";
//     reverse(name, 0, name.length() - 1);
//     cout << name << endl;
//     return 0;
// }

// bool checkPalindrome(string str, int i, int j)
// {
//     if (i > j)
//     {
//         return true;
//     }
//     if (str[i] != str[j])
//     {
//         return false;
//     }
//     else
//     {
//         return checkPalindrome(str, i + 1, j - 1);
//     }
// }

// int main()
// {
//     string name = "abba";

//     cout << endl;

//     bool isPalindrome = checkPalindrome(name, 0, name.length() - 1);

//     if (isPalindrome)
//     {
//         cout << "It is a palindrome " << endl;
//     }
//     else
//     {
//         cout << "It is not  palindrome " << endl;
//     }
//     return 0;
// }

// int power(int a, int b)
// {

//     // base case
//     if (b == 0)
//     {
//         return 1;
//     }

//     if (b == 1)
//     {
//         return a;
//     }

//     // recursion
//     int ans = power(a, b / 2);

//     // b is even
//     if (b % 2 == 0)
//     {
//         return ans * ans;
//     }
//     else
//     {
//         return a * ans * ans;
//     }
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     int ans = power(a, b);

//     cout << "Answer is" << ans << endl;
//     return 0;
// }

// Bubble sort

void sortArray(int *arr, int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return;
    }

    // case 1 solve karliya
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    sortArray(arr, n - 1);
}

int main()
{
    int arr[5] = {2, 5, 1, 6, 9};
    sortArray(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}