// #include <iostream>

// using namespace std;

// // bool palindrome(string s)
// // {
// //     int n = s.length();
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout<<i;
// //         for (int j = n-1; j >= 0; j--){
// //             // 3-1=2
// //             // j=1
// //             cout<<j<<" "<<i<<endl;

// //             if (s[i] != s[j])
// //             {

// //                 return false;
// //             }
// //         }
// //     }
// //     return true;
// // }

// // string palindrome(string &str)
// // {
// //     string res = "";
// //     for (int i = str.length()-1; i >= 0; i--)
// //     {
// //         res += str[i];
// //     }
// //     return res;
// // }

// bool isPalindrome(string str)
// {
//     int n = str.length();
//     for (int left = 0; left < n; left++)
//     {
//         for (int right = n - 1; right >= 0; right--)
//         {
//             if (str[left] != str[right])
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// int main()
// {
//     string str = "radar";
//     bool ans = isPalindrome(str);
//     cout << ans << endl;
//     if (ans)
//     {
//         cout << "Palindrome" << endl;
//     }
//     else
//     {
//         cout << "not a Palindrome" << endl;
//     }

//     // if (str == ans)
//     // {
//     //     cout << "palindrome";

//     // }
//     // else
//     // {
//     //     cout << "not palindrome";

//     // }

//     return 0;
// }

#include <iostream>
using namespace std;

bool isPalindrome(string str)
{
    int left = 0;
    int right = str.length() - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false; // Characters don't match, not a palindrome
        }
        left++;
        right--;
    }

    return true; // All characters matched, it's a palindrome
}

int main()
{
    string str = "radar";
    bool ans = isPalindrome(str);

    if (ans)
    {
        cout << str << " is a palindrome" << endl;
    }
    else
    {
        cout << str << " is not a palindrome" << endl;
    }

    return 0;
}
