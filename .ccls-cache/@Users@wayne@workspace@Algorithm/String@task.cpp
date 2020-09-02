#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> nums {0,1,0,3,12};
    int l = 0, r = 1;

    while (l < nums.size() - 2) {
        if (!nums[l] && nums[r]) {
            swap(nums[l], nums[r]);
            l++;
            r=l+1;
        }
        if (!nums[r]) {
            r++;
        }
    }
    for (int i = 0; i < nums.size(); i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}
