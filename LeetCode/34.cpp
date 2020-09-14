#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums { 5, 7, 7, 8, 8, 10 };
    int target = 8;
    int left = 0, right = nums.size() - 1, mid;
    vector<int> ans(2, -1);
    while (left < right) {
        mid = left + (right - left) / 2;
        if (nums[mid] >= target)
            right = mid;
        else
            left = mid + 1;
    }
    if (nums[left] == target)
        ans[0] = left;

    right = nums.size();

    while (left < right) {
        mid = left + (right - left) / 2;
        if (nums[mid] <= target)
            left = mid;
        else
            right = mid - 1;
    }
    if (nums[right] == target)
        ans[1] = right;
    return 0;
}
