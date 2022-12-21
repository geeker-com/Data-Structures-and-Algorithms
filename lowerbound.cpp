#include <bits/stdc++.h>
using namespace std;
int peak(int a[], int h, int x)
{

    int l = 0;
    int m = l + (h - l) / 2;
    while (l < h)
    {

        if (a[m] < x)
        {

            l = m;
        }
        else
        {
            h = m - 1;
        }
        m = l + (h - l) / 2;
    }
    return l;
}
int main()
{
    int a[] = {1, 2, 8, 10, 11, 12, 19};
    int n = sizeof(a) / sizeof(a[0]);

    cout << a[peak(a, n - 1, 5)] << endl;
}