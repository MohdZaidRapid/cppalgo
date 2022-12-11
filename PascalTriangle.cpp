#include <iostream>
using namespace std;

int Ncr(int n, int r)
{
    int res = 1;

    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int main()
{
    int ans = Ncr(10, 4);
    cout << ans << endl;

    return 0;
}