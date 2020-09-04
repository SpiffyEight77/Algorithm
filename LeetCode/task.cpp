#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums { 1, 1, 1, 2, 2, 3 };
    //vector<int> nums { 0, 0, 1, 1, 1, 1, 2, 3, 3 };
    int ans = 0, cnt = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[ans]) {
            nums[ans + min(2, cnt)] = nums[i];
            ans += min(2, cnt);
            cnt = 1;
        } else if (nums[i] == nums[ans] && nums[i] != nums[ans+1]) {
            nums[++ans] = nums[i];
            cnt++;
        } else {
            cnt++;
        }
    }
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    cout << ans << endl;
    return 0;
}
