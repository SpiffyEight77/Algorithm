#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums { 2, 5, 6, 0, 0, 1, 2 };
    int target = 0;

    int left = 0, right = nums.size() - 1, mid;

    while (left < right) {
        mid = left + (right - left) / 2;
        if (nums[mid] == target)
            return 1;
        if (nums[left] == nums[mid]) {
            left++;
            continue;
        }
        if (nums[left] < nums[mid]) {
            if (nums[left] <= target && nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        } else {
            if (nums[right] >= target && nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }

    return 0;
}
