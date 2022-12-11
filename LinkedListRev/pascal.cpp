#include <iostream>
#include <vector>

using namespace std;

int pascal(int n, int r)
{
    long long res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }

    return res;
}

int main()
{

    int ans = pascal(10, 3);
    cout << ans << endl;
    return 0;
}