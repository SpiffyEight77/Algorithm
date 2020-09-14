#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums { 4, 5, 6, 7, 0, 1, 2 };
    int target = 0;
    int left = 0, right = nums.size() - 1, mid;

    while (left <= right) {
        if (nums[mid] == target)
            return mid;
        if (nums[0] <= nums[mid]) {
            if (nums[mid] > target && nums[0] <= target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        } else {
            if (nums[mid] < target && nums[nums.size() - 1] >= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }
    return 0;
}
