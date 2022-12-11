#include <iostream>
using namespace std;

int main()
{
    string str = "zaid";
    string res = "";

    for (int i = str.length()-1; i >= 0; i--)
    {
        res += str[i];

        
    }
    cout<<res;

    return 0;
}