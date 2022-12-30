#include <bits/stdc++.h>
using namespace std;
int maxMeetings(int start[], int end[], int n)
{
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(end[i], start[i]));
    }
    sort(v.begin(), v.end());
    int c = 1;
    int ans = v[0].first;
    for (int i = 0; i < n - 1; i++)
    {
        if (ans < v[i + 1].second)
        {
            ans = v[i + 1].first;
            c++;
        }
    }
    return c;
}
int main()
{
    int start[] = {1, 3, 0, 5, 8, 5};
    int end[] = {2, 4, 6, 7, 9, 9};
    int N = 6;
    cout << maxMeetings(start, end, N);
}