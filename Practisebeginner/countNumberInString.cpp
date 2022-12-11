#include <iostream>
using namespace std;

string numberInString(string str)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            result += str[i];
        }
    }
    return result;
}

int countString(string str2)
{
    int count = 0;
    for (int i = 0; i < str2.length(); i++)
    {
        count++;
    }

    return count;
}

int main()
{
    string str1 = "hhelloyotioiroitor67";
    string res = numberInString(str1);
    int count = countString(res);
    cout << res << endl;
    cout << count << endl;
    return 0;
}