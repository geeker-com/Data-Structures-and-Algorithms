// class Solution
// {
// public:
//     void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
//     {

//         int j = 0;
//         if (nums2.size() > 0)
//         {
//             for (int i = m; i < m + n; i++)
//             {
//                 if (nums1[i] == 0)
//                 {
//                     nums1[i] = nums2[j];
//                     j++;
//                 }
//             }
//             sort(nums1.begin(), nums1.end());
//         }
//     }
// };
// this solution was self made below solution is from the lecture
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{

    int j = 0;
    int i = 0;
    vector<int> v;
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            v.push_back(nums1[i]);
            i++;
        }

        else
        {
            v.push_back(nums2[j]);
            j++;
        }
    }
    while (i < m)
    {
        v.push_back(nums1[i]);
        i++;
    }
    while (j < n)
    {
        v.push_back(nums2[j]);
        j++;
    }
    nums1 = v;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    vector<int> nums1, nums2;
    nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    nums2 = {2, 5, 6};
    int n = 3;
    merge(nums1, m, nums2, n);
}