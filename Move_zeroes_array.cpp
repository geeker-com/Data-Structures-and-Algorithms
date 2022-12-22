#include <bits/stdc++.h>
using namespace std;
// void moveZeroes(vector<int> &nums)
// {
//     int sz = nums.size();
//     vector<int> v(sz, 0);
//     int i = 0;
//     int z = 0;
//     int j = 0;
//     for (int i = 0; i < sz; i++)
//     {
//         if (nums[i] == 0)
//         {
//             z++;
//         }
//     }
//     int k = 0;
//     while (i < sz)
//     {
//         if (nums[i] != 0)
//         {

//             v[k] = nums[i];
//             k++;
//         }
//         else
//         {
//             v[sz - 1 - j] = 0;
//             j++;
//         }
//         i++;
//     }
//     nums = v;
// }
// this solution was self made below solution is from the lecture
void moveZeroes(vector<int> &nums)
{
    int sz = nums.size();

    int i = 0;

    int k = 0;
    while (i < sz)
    {
        if (nums[i] != 0)
        {

            swap(nums[i], nums[k]);
            k++;
        }

        i++;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> nums;
    nums = {0, 1, 0, 3, 9, 8};
    moveZeroes(nums);
}