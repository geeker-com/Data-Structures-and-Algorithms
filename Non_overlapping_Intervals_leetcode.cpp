#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    static bool cmp(vector<int> a, vector<int> b)
    {
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end(), cmp);
        int c = 1;
        int sz = intervals.size();
        int ans = intervals[0][1];
        for (int i = 0; i < sz - 1; i++)
        {
            if (ans <= intervals[i + 1][0])
            {
                ans = intervals[i + 1][1];
                c++;
            }
        }
        return sz - c;
    }
};
int main()
{
    Solution ob;
    vector<vector<int>> intervals;
    intervals = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
    cout << ob.eraseOverlapIntervals(intervals);
}