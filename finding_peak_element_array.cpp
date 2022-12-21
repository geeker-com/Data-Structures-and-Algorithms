#include <bits/stdc++.h>
using namespace std;
int peak(int a[], int h)
{
    int l = 0;

    int m = l + (h - l) / 2;

    while (l < h)
    {

        if (a[m] < a[m + 1])
        {

            l = m + 1;
        }
        else
        {
            h = m;
        }
        m = l + (h - l) / 2;
    }
    return l;
}
int main()
{
    int a[] = {1, 2, 10, 9, 8};
    int n = sizeof(a) / sizeof(a[0]);

    cout << a[peak(a, n - 1)] << endl;
}