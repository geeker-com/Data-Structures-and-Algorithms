#include <bits/stdc++.h>
using namespace std;
int pivot(int a[], int h)
{
    int l = 0;

    int m = l + (h - l) / 2;

    while (l < h)
    {
        if (a[l] < a[h])
        {
            return l;
        }

        if (a[m] >= a[0])
        {

            l = m + 1;
        }
        else
        {
            h = m;
        }
        m = l + (h - l) / 2;
    }
    return h;
}
int find(int a[], int x, int n)
{
    int pivind = pivot(a, n - 1);
    int piv = a[pivind];
    cout << piv << endl;

    if (x >= piv && x <= a[n - 1])
    {
        int l = pivind;
        int h = n - 1;

        int m = l + (h - l) / 2;

        while (l <= h)
        {

            if (a[m] == x)
            {

                return m;
            }
            if (a[m] < x)
            {
                l = m + 1;
            }
            else
            {
                h = m - 1;
            }
            m = l + (h - l) / 2;
        }
        return -1;
    }
}
int main()
{
    int a[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n = sizeof(a) / sizeof(a[0]);

    cout << find(a, 10, n) << endl;
}
