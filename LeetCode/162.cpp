#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums { 1, 2, 3, 1 };
    int left = 0, right = nums.size() - 1, mid;
    while (left < right) {
        mid = left + (right - left) / 2;
        if (nums[mid] > nums[mid + 1])
            right = mid;
        else
            left = mid + 1;
    }
    return left;
}
