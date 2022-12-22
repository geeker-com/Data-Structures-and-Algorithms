#include <bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> &arr, int m)
{

    int sz = arr.size();
    int j = 1;

    for (int i = m + 1; i < sz; i++)

    {
        int t = arr[i];
        arr[i] = arr[sz - j];
        arr[sz - j] = t;

        if (j == (sz - m - 1) / 2)
        {

            break;
        }
        j++;
    }
}
// Alternate short code according to lecture
// void reverseArray(vector<int> &arr, int m)
// {

//     int s = 0;
//     int e = arr.size() - 1;

//     while (s <= e)

//     {
//         swap(arr[s], arr[e]);
//         s++;
//         e--;
//     }
//// }
int main()
{
    vector<int> arr;
    arr = {1, 2, 3, 4, 5, 6};
    reverseArray(arr, 3);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}