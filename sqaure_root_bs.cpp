#include <bits/stdc++.h>
using namespace std;
long long int intSqrt(long long int x)
{
    long long int l = 1, h = x / 2, ans; // can be done via l=0,h=x and then x==0 and x==1 condition need not to be defined
    long long int m = l + (h - l) / 2;
    if (x == 0 || x == 1)
    {
        return x;
    }
    while (l <= h)
    {
        if (m * m == x)
        {
            return m;
        }
        if (m * m < x)
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            h = m - 1;
        }

        m = l + (h - l) / 2;
    }
    return ans;
}
// double moreprecision(int n, int num, int v)
// {
//     double f = 1;
//     double value = num;
//     while (n--)
//     {
//         f = f / 10;
//         for (double i = num; i * i <= v; i = i + f)
//         {
//             value = i;
//         }
//     }
//     return value;
// }
int main()
{
    int x = intSqrt(83);
    // cout << moreprecision(10, x, 83) << endl;//meant for getting precision in decimals for square roots
}