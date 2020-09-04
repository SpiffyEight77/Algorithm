#include <bits/stdc++.h>
using namespace std;
int main() {
    //vector<int> nums {0,1,0,3,12};
    vector<int> nums {1,3,12,0,0};
    int cur = 1,l = 0;
    while (cur < nums.size()) {
        while (nums[l] && l < nums.size()) l++;
        if (nums[cur] && l < cur) swap(nums[cur],nums[l]);
        cur++;
    }
    for (int i = 0; i < nums.size(); i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}
