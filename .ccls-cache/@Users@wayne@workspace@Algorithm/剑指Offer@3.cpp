方法一 排序后遍历

class Solution {
    public:
        int findRepeatNumber(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == nums[i+1]) {
                    return nums[i];
                }
            }
            return 0;
        }
};
复杂度分析
排序一个长度为n的数组需要O(nlogn)的时间

方法二 哈希表
