#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums { 2, 2, 2, 0, 1 };
    int left = 0, right = nums.size() - 1, mid;
    while (left < right) {
        mid = left + (right - left) / 2;

        if (nums[mid] > nums[left]) {
            left = mid + 1;
        } else if (nums[mid] < nums[right]) {
            right = mid;
        } else {
            right--;
        }
    }
    return nums[left];
}
