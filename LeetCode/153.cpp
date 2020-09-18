#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums { 3, 4, 5, 1, 2 };
    if (nums.size() == 1) return nums[0];
    int left = 0, right = nums.size() - 1, mid;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (nums[mid + 1] < nums[mid])
            return nums[mid + 1];
        if (nums[mid - 1] > nums[mid])
            return nums[mid];
        if (nums[left] > nums[right]) {
            left = mid + 1;
        } else {
            right = mid -1;
        }
    }
    return 0;
}
