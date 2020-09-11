#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums { -1, 0, 3, 5, 9, 12 };
    int target = 9;
    int left = 0, right = nums.size() - 1, mid;

    while (left <= right) {
        mid = left + (right - left) / 2;
        if (nums[mid] == target)
            return mid;
        if (nums[mid] > target)
            right = mid - 1;
        else
            left++;
    }

    return -1;
}
