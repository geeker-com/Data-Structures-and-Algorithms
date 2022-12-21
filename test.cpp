#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr;
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        int sz = arr.size();
        int j = 1;
        

        for (int i = 0; i < sz; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}